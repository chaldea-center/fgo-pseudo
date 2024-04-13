void __fastcall MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EBB06 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x3

  if ( (byte_42EBAFF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17721/*"color"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBAFF = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_17721/*"color"*/, v2);
}


System_Collections_Generic_List_int__o *__fastcall MapGimmickEntity__GetEventMissionIdList(
        MapGimmickEntity_o *this,
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
  System_Collections_Generic_List_int__o *v17; // x19
  const MethodInfo *v18; // x2
  System_String_o *StringFromScript; // x21
  const MethodInfo *v20; // x1
  System_String_array *v21; // x0
  System_String_array *v22; // x1
  __int64 v23; // x8
  System_String_array *v24; // x20
  unsigned __int64 v25; // x21
  __int64 v27; // x0

  if ( (byte_42EBAF8 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20052/*"info"*/, v14, v15, v16);
    byte_42EBAF8 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_20052/*"info"*/, v18);
  if ( !System_String__IsNullOrEmpty(StringFromScript, 0LL) && MapGimmickEntity__GetScriptType(this, v20) == 1 )
  {
    v21 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v21 )
      goto LABEL_16;
    v22 = v21;
    if ( !v21->max_length )
      goto LABEL_15;
    LOWORD(v21->m_Items[0]) = 47;
    if ( !StringFromScript || (v21 = System_String__Split(StringFromScript, (System_Char_array *)v21, 0LL)) == 0LL )
LABEL_16:
      sub_B5D69C(v21, v22);
    v23 = *(_QWORD *)&v21->max_length;
    v24 = v21;
    if ( (int)v23 >= 1 )
    {
      v25 = 0LL;
      while ( v25 < (unsigned int)v23 )
      {
        v21 = (System_String_array *)System_Int32__Parse(v24->m_Items[v25], 0LL);
        if ( !v17 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v17,
          (int32_t)v21,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        LODWORD(v23) = v24->max_length;
        if ( (__int64)++v25 >= (int)v23 )
          return v17;
      }
LABEL_15:
      v27 = sub_B5D6C8(v21);
      sub_B5D668(v27, 0LL);
    }
  }
  return v17;
}


int32_t __fastcall MapGimmickEntity__GetIntFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v10; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBB03 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    byte_42EBB03 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v10 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v10, 0LL);
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
  __int64 v3; // x3

  if ( (byte_42EBAFE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21968/*"raidDispSpotId"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBAFE = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21968/*"raidDispSpotId"*/, v2);
}


int32_t __fastcall MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EBAF7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23141/*"type"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBAF7 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23141/*"type"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetStringFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBB02 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EBB02 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v3; // x3

  if ( (byte_42EBAFD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22710/*"subTitle"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBAFD = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_22710/*"subTitle"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EBAFC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23008/*"title"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBAFC = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_23008/*"title"*/, v2);
}


UnityEngine_Vector3_o __fastcall MapGimmickEntity__GetTouchSize(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t IntFromScript; // w20
  const MethodInfo *v9; // x2
  int32_t v10; // w0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAF9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23045/*"touchH"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23046/*"touchW"*/, v5, v6, v7);
    byte_42EBAF9 = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23046/*"touchW"*/, v2);
  v10 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23045/*"touchH"*/, v9);
  v11 = (float)IntFromScript;
  v12 = (float)v10;
  v13 = 0.0;
  result.fields.z = v13;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


int32_t __fastcall MapGimmickEntity__GetUseAnimFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EBB00 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23282/*"useAnim"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBB00 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23282/*"useAnim"*/, v2);
}


bool __fastcall MapGimmickEntity__IsCheckRaidProgress(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EBB05 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20176/*"isCheckRaidProgress"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBB05 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20176/*"isCheckRaidProgress"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool __fastcall MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EBB01 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20181/*"isEnabledBillBoard"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EBB01 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20181/*"isEnabledBillBoard"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool __fastcall MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EBB04 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19298/*"gimmickType"*/, (_DWORD)method, v2, v3);
    byte_42EBB04 = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19298/*"gimmickType"*/, -1, v3) == 1;
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
  if ( (byte_42EBAFB & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42EBAFB = 1;
  }
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v9, v10);
}


Il2CppObject *__fastcall MapGimmickEntity__getScriptObj(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBAFA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EBAFA = 1;
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
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBAF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_MapGimmickLayerMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42EBAF6 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.id,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  return 0;
}