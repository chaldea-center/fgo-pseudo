void __fastcall MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB5E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FB5E4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MapGimmickEntity__CreatePrimaryKey(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall MapGimmickEntity__GetColorCodeFromScript(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5DE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17436/*"color"*/, method);
    byte_40FB5DE = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_17436/*"color"*/, v2);
}


System_Collections_Generic_List_int__o *__fastcall MapGimmickEntity__GetEventMissionIdList(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  const MethodInfo *v11; // x2
  System_String_o *StringFromScript; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  System_Char_array *v15; // x0
  __int64 v16; // x2
  System_Char_array *v17; // x1
  __int64 v18; // x8
  System_Char_array *v19; // x20
  unsigned __int64 v20; // x21
  int32_t v21; // w0

  if ( (byte_40FB5D7 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19727/*"info"*/, v9);
    byte_40FB5D7 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_19727/*"info"*/, v11);
  if ( !System_String__IsNullOrEmpty(StringFromScript, 0LL) && MapGimmickEntity__GetScriptType(this, v13) == 1 )
  {
    v15 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v14);
    if ( !v15 )
      goto LABEL_16;
    v17 = v15;
    if ( !v15->max_length )
      goto LABEL_15;
    v15->m_Items[2] = 47;
    if ( !StringFromScript || (v15 = (System_Char_array *)System_String__Split(StringFromScript, v15, 0LL)) == 0LL )
LABEL_16:
      sub_B170D4();
    v18 = *(_QWORD *)&v15->max_length;
    v19 = v15;
    if ( (int)v18 >= 1 )
    {
      v20 = 0LL;
      while ( v20 < (unsigned int)v18 )
      {
        v21 = System_Int32__Parse(*(System_String_o **)&v19->m_Items[4 * v20 + 2], 0LL);
        if ( !v10 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v10,
          v21,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        LODWORD(v18) = v19->max_length;
        if ( (__int64)++v20 >= (int)v18 )
          return v10;
      }
LABEL_15:
      sub_B17100(v15, v17, v16);
      sub_B170A0();
    }
  }
  return v10;
}


int32_t __fastcall MapGimmickEntity__GetIntFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v7; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB5E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_40FB5E2 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v7, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


UnityEngine_Vector3_o __fastcall MapGimmickEntity__GetLocalPositionOnMapModel(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  int32_t x; // s8
  int32_t y; // s9
  int32_t z; // w0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.x;
  y = this->fields.y;
  z = MapGimmickEntity__get_z(this, method);
  v5 = (float)x;
  v6 = (float)y;
  v7 = (float)z;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


int32_t __fastcall MapGimmickEntity__GetMapId(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t __fastcall MapGimmickEntity__GetRaidDispSpotIdFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21583/*"raidDispSpotId"*/, method);
    byte_40FB5DD = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21583/*"raidDispSpotId"*/, v2);
}


int32_t __fastcall MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22743/*"type"*/, method);
    byte_40FB5D6 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22743/*"type"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetStringFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB5E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FB5E1 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


System_String_o *__fastcall MapGimmickEntity__GetSubTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5DC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22314/*"subTitle"*/, method);
    byte_40FB5DC = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22314/*"subTitle"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5DB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22610/*"title"*/, method);
    byte_40FB5DB = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22610/*"title"*/, v2);
}


UnityEngine_Vector3_o __fastcall MapGimmickEntity__GetTouchSize(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int32_t IntFromScript; // w20
  const MethodInfo *v6; // x2
  int32_t v7; // w0
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB5D8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22647/*"touchH"*/, method);
    sub_B16FFC(&StringLiteral_22648/*"touchW"*/, v4);
    byte_40FB5D8 = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22648/*"touchW"*/, v2);
  v7 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22647/*"touchH"*/, v6);
  v8 = (float)IntFromScript;
  v9 = (float)v7;
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


int32_t __fastcall MapGimmickEntity__GetUseAnimFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22884/*"useAnim"*/, method);
    byte_40FB5DF = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22884/*"useAnim"*/, v2);
}


bool __fastcall MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool __fastcall MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB5E0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19847/*"isEnabledBillBoard"*/, method);
    byte_40FB5E0 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19847/*"isEnabledBillBoard"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool __fastcall MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FB5E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18987/*"gimmickType"*/, method);
    byte_40FB5E3 = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18987/*"gimmickType"*/, -1, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MapGimmickEntity__getScriptIntParam(
        MapGimmickEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  MapGimmickEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  v4 = defVal;
  if ( (byte_40FB5DA & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FB5DA = 1;
  }
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (MapGimmickEntity_o *)sub_B173C8(ScriptObj);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v9, v10);
}


Il2CppObject *__fastcall MapGimmickEntity__getScriptObj(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB5D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FB5D9 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall MapGimmickEntity__get_z(MapGimmickEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB5D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_MapGimmickLayerMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__, v4);
    byte_40FB5D5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         this->fields.id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B170D4();
  }
  return 0;
}