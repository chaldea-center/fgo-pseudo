void __fastcall MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41858A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41858A4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_418589D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17502/*"color"*/, method);
    byte_418589D = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_17502/*"color"*/, v2);
}


System_Collections_Generic_List_int__o *__fastcall MapGimmickEntity__GetEventMissionIdList(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  const MethodInfo *v8; // x2
  System_String_o *StringFromScript; // x21
  const MethodInfo *v10; // x1
  System_String_array *v11; // x0
  System_String_array *v12; // x1
  __int64 v13; // x8
  System_String_array *v14; // x20
  unsigned __int64 v15; // x21
  __int64 v17; // x0

  if ( (byte_4185896 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_19801/*"info"*/, v6);
    byte_4185896 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_19801/*"info"*/, v8);
  if ( !System_String__IsNullOrEmpty(StringFromScript, 0LL) && MapGimmickEntity__GetScriptType(this, v10) == 1 )
  {
    v11 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v11 )
      goto LABEL_16;
    v12 = v11;
    if ( !v11->max_length )
      goto LABEL_15;
    LOWORD(v11->m_Items[0]) = 47;
    if ( !StringFromScript || (v11 = System_String__Split(StringFromScript, (System_Char_array *)v11, 0LL)) == 0LL )
LABEL_16:
      sub_B2C434(v11, v12);
    v13 = *(_QWORD *)&v11->max_length;
    v14 = v11;
    if ( (int)v13 >= 1 )
    {
      v15 = 0LL;
      while ( v15 < (unsigned int)v13 )
      {
        v11 = (System_String_array *)System_Int32__Parse(v14->m_Items[v15], 0LL);
        if ( !v7 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v7,
          (int32_t)v11,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        LODWORD(v13) = v14->max_length;
        if ( (__int64)++v15 >= (int)v13 )
          return v7;
      }
LABEL_15:
      v17 = sub_B2C460(v11);
      sub_B2C400(v17, 0LL);
    }
  }
  return v7;
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

  if ( (byte_41858A1 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_41858A1 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_418589C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21675/*"raidDispSpotId"*/, method);
    byte_418589C = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21675/*"raidDispSpotId"*/, v2);
}


int32_t __fastcall MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4185895 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22836/*"type"*/, method);
    byte_4185895 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22836/*"type"*/, v2);
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

  if ( (byte_41858A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_41858A0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_418589B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22406/*"subTitle"*/, method);
    byte_418589B = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22406/*"subTitle"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418589A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22703/*"title"*/, method);
    byte_418589A = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22703/*"title"*/, v2);
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

  if ( (byte_4185897 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22740/*"touchH"*/, method);
    sub_B2C35C(&StringLiteral_22741/*"touchW"*/, v4);
    byte_4185897 = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22741/*"touchW"*/, v2);
  v7 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22740/*"touchH"*/, v6);
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

  if ( (byte_418589E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22977/*"useAnim"*/, method);
    byte_418589E = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22977/*"useAnim"*/, v2);
}


bool __fastcall MapGimmickEntity__IsCheckRaidProgress(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_41858A3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19924/*"isCheckRaidProgress"*/, method);
    byte_41858A3 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19924/*"isCheckRaidProgress"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool __fastcall MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418589F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19929/*"isEnabledBillBoard"*/, method);
    byte_418589F = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19929/*"isEnabledBillBoard"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool __fastcall MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_41858A2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19059/*"gimmickType"*/, method);
    byte_41858A2 = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19059/*"gimmickType"*/, -1, v2) == 1;
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
  if ( (byte_4185899 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_4185899 = 1;
  }
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (MapGimmickEntity_o *)sub_B2C728(ScriptObj);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v9, v10);
}


Il2CppObject *__fastcall MapGimmickEntity__getScriptObj(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185898 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4185898 = 1;
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
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185894 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_MapGimmickLayerMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__, v4);
    byte_4185894 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.id,
                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  }
  return 0;
}