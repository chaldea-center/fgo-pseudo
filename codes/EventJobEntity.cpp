void EventJobEntity___ctor(EventJobEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970827 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970827 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventJobEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5970826 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970826 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventJobEntity__CreatePrimaryKey(EventJobEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventJobEntity__CreatePK(this->fields.eventId, this->fields.id, v2);
}


int32_t EventJobEntity__GetCondType(EventJobEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


System_String_o *EventJobEntity__GetJobConfirmSecretDetail(EventJobEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970824 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22133/*"jobConfirmSkillDetail"*/);
    byte_5970824 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22133/*"jobConfirmSkillDetail"*/, 0, 0);
}


System_String_o *EventJobEntity__GetJobConfirmSecretName(EventJobEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970823 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22134/*"jobConfirmSkillName"*/);
    byte_5970823 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22134/*"jobConfirmSkillName"*/, 0, 0);
}


System_String_o *EventJobEntity__GetJobListSecretName(EventJobEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970822 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22139/*"jobListSecretName"*/);
    byte_5970822 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22139/*"jobListSecretName"*/,
           this->fields.name,
           0);
}


System_String_o *EventJobEntity__GetJobListSkillName(EventJobEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  System_String_o *SkillName; // x2

  if ( (byte_5970821 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22140/*"jobListSkillName"*/);
    byte_5970821 = 1;
  }
  script = this->fields.script;
  SkillName = EventJobEntity__GetSkillName(this, method);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_22140/*"jobListSkillName"*/, SkillName, 0);
}


int32_t EventJobEntity__GetOverWritePhotoImageId(
        EventJobEntity_o *this,
        int32_t defaultImageId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  System_Func_object__object__o *v6; // x21
  Il2CppObject *ScriptValue_object__object; // x0
  __int64 v8; // x1
  int monitor; // w8
  Il2CppObject *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x25
  int32_t v13; // w21

  if ( (byte_5970825 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_object__EventJobEntity_OverWriteImageIdInfo_____);
    sub_2213A60(&System_Func_object__EventJobEntity_OverWriteImageIdInfo____TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_EventJobEntity_OverWriteImageIdInfo___);
    sub_2213A60(&StringLiteral_23647/*"overWritePhotoImageIds"*/);
    byte_5970825 = 1;
  }
  script = this->fields.script;
  v6 = (System_Func_object__object__o *)sub_2213CCC(System_Func_object__EventJobEntity_OverWriteImageIdInfo____TypeInfo);
  System_Func_object__object____ctor(
    v6,
    0,
    Method_JsonManager_DeserializeArray_EventJobEntity_OverWriteImageIdInfo___,
    0);
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 script,
                                 (System_String_o *)StringLiteral_23647/*"overWritePhotoImageIds"*/,
                                 (System_Func_TSource__TDestination__o *)v6,
                                 0,
                                 (const MethodInfo_3861168 *)Method_EntityScriptUtil_GetScriptValue_object__EventJobEntity_OverWriteImageIdInfo_____);
  if ( ScriptValue_object__object )
  {
    monitor = (int)ScriptValue_object__object[1].monitor;
    v10 = ScriptValue_object__object;
    if ( monitor >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= monitor )
          sub_2213CE4(ScriptValue_object__object);
        v12 = *((_QWORD *)&v10[2].klass + v11);
        if ( !v12 )
          sub_2213CDC(ScriptValue_object__object, v8);
        v13 = *(_DWORD *)(v12 + 20);
        if ( !v13 )
          break;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8);
        ScriptValue_object__object = (Il2CppObject *)CondType__IsCommonRelease(v13, 0, 0);
        if ( ((unsigned __int8)ScriptValue_object__object & 1) != 0 )
          break;
        monitor = (int)v10[1].monitor;
        if ( (int)++v11 >= monitor )
          return defaultImageId;
      }
      if ( *(int *)(v12 + 16) > 0 )
        return *(_DWORD *)(v12 + 16);
    }
  }
  return defaultImageId;
}


System_String_o *EventJobEntity__GetPassportSkillDetail(EventJobEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  System_String_o *SkillDetail; // x2

  if ( (byte_597081D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23811/*"passportSkillDetail"*/);
    byte_597081D = 1;
  }
  script = this->fields.script;
  SkillDetail = EventJobEntity__GetSkillDetail(this, method);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_23811/*"passportSkillDetail"*/, SkillDetail, 0);
}


System_String_o *EventJobEntity__GetPassportSkillName(EventJobEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  System_String_o *SkillName; // x2

  if ( (byte_597081F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23812/*"passportSkillName"*/);
    byte_597081F = 1;
  }
  script = this->fields.script;
  SkillName = EventJobEntity__GetSkillName(this, method);
  return EntityScriptUtil__GetStringValue(script, (System_String_o *)StringLiteral_23812/*"passportSkillName"*/, SkillName, 0);
}


System_String_o *EventJobEntity__GetSkillDetail(EventJobEntity_o *this, const MethodInfo *method)
{
  int32_t skillId; // w8
  SkillLvMaster_o *Master_object; // x0
  __int64 v5; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_597081C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597081C = 1;
  }
  skillId = this->fields.skillId;
  entity = 0;
  if ( skillId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_object )
      goto LABEL_11;
    if ( SkillLvMaster__TryGetEntity(Master_object, &entity, this->fields.skillId, this->fields.skillLv, 0) )
    {
      Master_object = (SkillLvMaster_o *)entity;
      if ( entity )
        return SkillLvEntity__getDetail(entity, 0, 0, 0);
LABEL_11:
      sub_2213CDC(Master_object, v5);
    }
  }
  return **(System_String_o ***)(qword_5984390 + 184);
}


System_String_o *EventJobEntity__GetSkillName(EventJobEntity_o *this, const MethodInfo *method)
{
  int32_t skillId; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_597081E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_597081E = 1;
  }
  skillId = this->fields.skillId;
  entity = 0;
  if ( skillId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !Master_object )
      goto LABEL_11;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields.skillId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      Master_object = entity;
      if ( entity )
        return SkillEntity__getName((SkillEntity_o *)entity, 0);
LABEL_11:
      sub_2213CDC(Master_object, v5);
    }
  }
  return **(System_String_o ***)(qword_5984390 + 184);
}


bool EventJobEntity__IsDisplayOpen(EventJobEntity_o *this, const MethodInfo *method)
{
  int32_t dispCondType; // w20
  int32_t dispCondId; // w21
  int64_t dispCondNum; // x19

  if ( (byte_597081A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_597081A = 1;
  }
  dispCondType = this->fields.dispCondType;
  dispCondId = this->fields.dispCondId;
  dispCondNum = this->fields.dispCondNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(dispCondType, dispCondId, dispCondNum, 0, 0, 0);
}


bool EventJobEntity__IsHideCondOpen(EventJobEntity_o *this, const MethodInfo *method)
{
  int32_t hideCondType; // w20
  int32_t hideCondId; // w21
  int64_t hideCondNum; // x19

  if ( (byte_597081B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_597081B = 1;
  }
  hideCondType = this->fields.hideCondType;
  hideCondId = this->fields.hideCondId;
  hideCondNum = this->fields.hideCondNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(hideCondType, hideCondId, hideCondNum, 0, 0, 0);
}


bool EventJobEntity__IsHideJobName(EventJobEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  __int64 v4; // x1
  int32_t v5; // w19

  if ( (byte_5970820 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&StringLiteral_20916/*"hideJobNameCommonReleaseId"*/);
    byte_5970820 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20916/*"hideJobNameCommonReleaseId"*/, 0, 0);
  if ( IntValue < 1 )
    return 0;
  v5 = IntValue;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
  return CondType__IsCommonRelease(v5, 0, 0);
}


bool EventJobEntity__IsJobSkillGetQuest(EventJobEntity_o *this, int32_t questId, const MethodInfo *method)
{
  int32_t condType; // w8

  condType = this->fields.condType;
  return (condType == 46 || condType == 1) && this->fields.condId == questId;
}


bool EventJobEntity__IsOpen(EventJobEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_5970819 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5970819 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


void EventJobEntity_OverWriteImageIdInfo___ctor(EventJobEntity_OverWriteImageIdInfo_o *this, const MethodInfo *method)
{
  this->fields.imageId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}