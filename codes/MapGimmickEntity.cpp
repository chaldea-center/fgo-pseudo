void __fastcall MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B303F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B303F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_42B3038 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17627/*"color"*/);
    byte_42B3038 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_17627/*"color"*/, v2);
}


System_Collections_Generic_List_int__o *__fastcall MapGimmickEntity__GetEventMissionIdList(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  const MethodInfo *v4; // x2
  System_String_o *StringFromScript; // x21
  const MethodInfo *v6; // x1
  System_String_array *v7; // x0
  System_String_array *v8; // x1
  __int64 v9; // x8
  System_String_array *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_42B3031 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&StringLiteral_19950/*"info"*/);
    byte_42B3031 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_19950/*"info"*/, v4);
  if ( !System_String__IsNullOrEmpty(StringFromScript, 0LL) && MapGimmickEntity__GetScriptType(this, v6) == 1 )
  {
    v7 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !v7 )
      goto LABEL_16;
    v8 = v7;
    if ( !v7->max_length )
      goto LABEL_15;
    LOWORD(v7->m_Items[0]) = 47;
    if ( !StringFromScript || (v7 = System_String__Split(StringFromScript, (System_Char_array *)v7, 0LL)) == 0LL )
LABEL_16:
      sub_B52A5C(v7, v8);
    v9 = *(_QWORD *)&v7->max_length;
    v10 = v7;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      while ( v11 < (unsigned int)v9 )
      {
        v7 = (System_String_array *)System_Int32__Parse(v10->m_Items[v11], 0LL);
        if ( !v3 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v3,
          (int32_t)v7,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        LODWORD(v9) = v10->max_length;
        if ( (__int64)++v11 >= (int)v9 )
          return v3;
      }
LABEL_15:
      v13 = sub_B52A88(v7);
      sub_B52A28(v13, 0LL);
    }
  }
  return v3;
}


int32_t __fastcall MapGimmickEntity__GetIntFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B303C & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B303C = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v6, 0LL);
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

  if ( (byte_42B3037 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21855/*"raidDispSpotId"*/);
    byte_42B3037 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21855/*"raidDispSpotId"*/, v2);
}


int32_t __fastcall MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42B3030 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23026/*"type"*/);
    byte_42B3030 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23026/*"type"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetStringFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B303B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B303B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_42B3036 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22595/*"subTitle"*/);
    byte_42B3036 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22595/*"subTitle"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42B3035 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22893/*"title"*/);
    byte_42B3035 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22893/*"title"*/, v2);
}


UnityEngine_Vector3_o __fastcall MapGimmickEntity__GetTouchSize(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t IntFromScript; // w20
  const MethodInfo *v5; // x2
  int32_t v6; // w0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B3032 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22930/*"touchH"*/);
    sub_B52984(&StringLiteral_22931/*"touchW"*/);
    byte_42B3032 = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22931/*"touchW"*/, v2);
  v6 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22930/*"touchH"*/, v5);
  v7 = (float)IntFromScript;
  v8 = (float)v6;
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


int32_t __fastcall MapGimmickEntity__GetUseAnimFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42B3039 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23167/*"useAnim"*/);
    byte_42B3039 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23167/*"useAnim"*/, v2);
}


bool __fastcall MapGimmickEntity__IsCheckRaidProgress(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42B303E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20073/*"isCheckRaidProgress"*/);
    byte_42B303E = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20073/*"isCheckRaidProgress"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool __fastcall MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42B303A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20078/*"isEnabledBillBoard"*/);
    byte_42B303A = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20078/*"isEnabledBillBoard"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool __fastcall MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B303D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19201/*"gimmickType"*/);
    byte_42B303D = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19201/*"gimmickType"*/, -1, v2) == 1;
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
  if ( (byte_42B3034 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    byte_42B3034 = 1;
  }
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B52D50(ScriptObj);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v9, v10);
}


Il2CppObject *__fastcall MapGimmickEntity__getScriptObj(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B3033 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B3033 = 1;
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
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B302F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_MapGimmickLayerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
    byte_42B302F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.id,
                                                                  (const MethodInfo_23E2334 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  }
  return 0;
}