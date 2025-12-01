void MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC78CD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC78CD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t MapGimmickEntity__CreatePrimaryKey(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *MapGimmickEntity__GetColorCodeFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78C5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18077/*"color"*/);
    byte_4CC78C5 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_18077/*"color"*/, v2);
}


System_Collections_Generic_List_int__o *MapGimmickEntity__GetEventMissionIdList(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  const MethodInfo *v4; // x2
  System_String_o *StringFromScript; // x21
  const MethodInfo *v6; // x1
  System_String_array *ScriptType; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array *v10; // x20
  unsigned __int64 v11; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4CC78BE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&StringLiteral_20863/*"info"*/);
    byte_4CC78BE = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_20863/*"info"*/, v4);
  if ( !System_String__IsNullOrEmpty(StringFromScript, 0) )
  {
    ScriptType = (System_String_array *)MapGimmickEntity__GetScriptType(this, v6);
    if ( (_DWORD)ScriptType == 1 )
    {
      if ( !StringFromScript )
        goto LABEL_17;
      ScriptType = System_String__Split(StringFromScript, 0x2Fu, 0, 0);
      if ( !ScriptType )
        goto LABEL_17;
      max_length = ScriptType->max_length;
      v10 = ScriptType;
      if ( (int)max_length >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)max_length )
            sub_1C71610(ScriptType);
          ScriptType = (System_String_array *)System_Int32__Parse(v10->m_Items[v11], 0);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)ScriptType,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int)ScriptType;
          }
          LODWORD(max_length) = v10->max_length;
          if ( (__int64)++v11 >= (int)max_length )
            return v3;
        }
LABEL_17:
        sub_1C71608(ScriptType, v8);
      }
    }
  }
  return v3;
}


int32_t MapGimmickEntity__GetIntFromScript(MapGimmickEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC78C9 & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CC78C9 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v6, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


UnityEngine_Vector3_o MapGimmickEntity__GetLocalPositionOnMapModel(MapGimmickEntity_o *this, const MethodInfo *method)
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


int32_t MapGimmickEntity__GetMapId(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t MapGimmickEntity__GetRaidDispSpotIdFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78C4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23045/*"raidDispSpotId"*/);
    byte_4CC78C4 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23045/*"raidDispSpotId"*/, v2);
}


int32_t MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78BD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24367/*"type"*/);
    byte_4CC78BD = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24367/*"type"*/, v2);
}


System_String_o *MapGimmickEntity__GetStringFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC78C8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC78C8 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    return 0;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0;
}


System_String_o *MapGimmickEntity__GetSubTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78C3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23916/*"subTitle"*/);
    byte_4CC78C3 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_23916/*"subTitle"*/, v2);
}


System_String_o *MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78C2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24216/*"title"*/);
    byte_4CC78C2 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_24216/*"title"*/, v2);
}


UnityEngine_Vector3_o MapGimmickEntity__GetTouchSize(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t IntFromScript; // w20
  const MethodInfo *v5; // x2
  int32_t v6; // w0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC78BF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24256/*"touchH"*/);
    sub_1C713B0(&StringLiteral_24257/*"touchW"*/);
    byte_4CC78BF = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24257/*"touchW"*/, v2);
  v6 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24256/*"touchH"*/, v5);
  v7 = (float)IntFromScript;
  v8 = (float)v6;
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


int32_t MapGimmickEntity__GetUseAnimFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78C6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24599/*"useAnim"*/);
    byte_4CC78C6 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24599/*"useAnim"*/, v2);
}


bool MapGimmickEntity__InParentUIPanel(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78CC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20817/*"inParentUIPanel"*/);
    byte_4CC78CC = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20817/*"inParentUIPanel"*/, v2) > 0;
}


bool MapGimmickEntity__IsCheckRaidProgress(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78CB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20987/*"isCheckRaidProgress"*/);
    byte_4CC78CB = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20987/*"isCheckRaidProgress"*/, v2) > 0;
}


bool MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC78C7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20993/*"isEnabledBillBoard"*/);
    byte_4CC78C7 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20993/*"isEnabledBillBoard"*/, v2) > 0;
}


bool MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC78CA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19945/*"gimmickType"*/);
    byte_4CC78CA = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19945/*"gimmickType"*/, -1, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t MapGimmickEntity__getScriptIntParam(
        MapGimmickEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  MapGimmickEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_4CC78C1 & 1) == 0 )
  {
    sub_1C713B0(&long_TypeInfo);
    byte_4CC78C1 = 1;
  }
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C719A4(ScriptObj);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v11, v12);
}


Il2CppObject *MapGimmickEntity__getScriptObj(MapGimmickEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC78C0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CC78C0 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


int32_t MapGimmickEntity__get_z(MapGimmickEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC78BC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_MapGimmickLayerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
    byte_4CC78BC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.id,
                                    (const MethodInfo_3408ECC *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1C71608(Master_object, v4);
  }
  return 0;
}