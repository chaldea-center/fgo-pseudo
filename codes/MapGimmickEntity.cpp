void __fastcall MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C222EF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C222EF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4C222E7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18404/*"easeOutQuint"*/, method);
    byte_4C222E7 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_18404/*"easeOutQuint"*/, v2);
}


System_Collections_Generic_List_int__o *__fastcall MapGimmickEntity__GetEventMissionIdList(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  const MethodInfo *v7; // x2
  System_String_o *StringFromScript; // x21
  const MethodInfo *v9; // x1
  System_String_array *ScriptType; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  System_String_array *v13; // x20
  unsigned __int64 v14; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4C222E0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1C3B764(&StringLiteral_21070/*"messageId"*/, v5);
    byte_4C222E0 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_21070/*"messageId"*/, v7);
  if ( !System_String__IsNullOrEmpty(StringFromScript, 0LL) )
  {
    ScriptType = (System_String_array *)MapGimmickEntity__GetScriptType(this, v9);
    if ( (_DWORD)ScriptType == 1 )
    {
      if ( !StringFromScript )
        goto LABEL_17;
      ScriptType = System_String__Split(StringFromScript, 0x2Fu, 0, 0LL);
      if ( !ScriptType )
        goto LABEL_17;
      v12 = *(_QWORD *)&ScriptType->max_length;
      v13 = ScriptType;
      if ( (int)v12 >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v12 )
            sub_1C3B9C8(ScriptType, v11);
          ScriptType = (System_String_array *)System_Int32__Parse(v13->m_Items[v14], 0LL);
          if ( !v6 )
            break;
          items = v6->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          v11 = (unsigned int)ScriptType;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v6,
              (int32_t)ScriptType,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v6->fields._size = size + 1;
            items->m_Items[size + 1] = (int)ScriptType;
          }
          LODWORD(v12) = v13->max_length;
          if ( (__int64)++v14 >= (int)v12 )
            return v6;
        }
LABEL_17:
        sub_1C3B9C0(ScriptType, v11);
      }
    }
  }
  return v6;
}


int32_t __fastcall MapGimmickEntity__GetIntFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C222EB & 1) == 0 )
  {
    sub_1C3B764(&System_Convert_TypeInfo, key);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_4C222EB = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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

  if ( (byte_4C222E6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23229/*"storeSpecificErrorCode"*/, method);
    byte_4C222E6 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23229/*"storeSpecificErrorCode"*/, v2);
}


int32_t __fastcall MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C222DF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24611/*"{0:D2}h{1:D2}m{2:D2}s"*/, method);
    byte_4C222DF = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24611/*"{0:D2}h{1:D2}m{2:D2}s"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetStringFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C222EA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C3B764(&string_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C222EA = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4C222E5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24135/*"userservantcommentsave.dat"*/, method);
    byte_4C222E5 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_24135/*"userservantcommentsave.dat"*/, v2);
}


System_String_o *__fastcall MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C222E4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24457/*"x-mac-turkish"*/, method);
    byte_4C222E4 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_24457/*"x-mac-turkish"*/, v2);
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

  if ( (byte_4C222E1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24500/*"xsd"*/, method);
    sub_1C3B764(&StringLiteral_24501/*"xsi"*/, v4);
    byte_4C222E1 = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24501/*"xsi"*/, v2);
  v7 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24500/*"xsd"*/, v6);
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

  if ( (byte_4C222E8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24856/*"଀஀"*/, method);
    byte_4C222E8 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24856/*"଀஀"*/, v2);
}


bool __fastcall MapGimmickEntity__InParentUIPanel(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C222EE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21025/*"maxSize"*/, method);
    byte_4C222EE = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21025/*"maxSize"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsCheckRaidProgress(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C222ED & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21203/*"ms"*/, method);
    byte_4C222ED = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21203/*"ms"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool __fastcall MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C222E9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21208/*"mscorlib.dll"*/, method);
    byte_4C222E9 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21208/*"mscorlib.dll"*/, v2) > 0;
}


bool __fastcall MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool __fastcall MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C222EC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20215/*"img_txt_fp"*/, method);
    byte_4C222EC = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20215/*"img_txt_fp"*/, -1, v2) == 1;
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
  __int64 v8; // x2
  __int64 v9; // x3
  MapGimmickEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_4C222E3 & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, key);
    byte_4C222E3 = 1;
  }
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C3BC80(ScriptObj);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v11, v12);
}


Il2CppObject *__fastcall MapGimmickEntity__getScriptObj(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C222E2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4C222E2 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C222DE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MapGimmickLayerMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__, v4);
    byte_4C222DE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.id,
                                    (const MethodInfo_329AE94 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1C3B9C0(Master_object, v6);
  }
  return 0;
}