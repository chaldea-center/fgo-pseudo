void MapGimmickEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct MapGimmickEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct MapGimmickEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct MapGimmickEntity_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct MapGimmickEntity_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct MapGimmickEntity_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  if ( (byte_5970D69 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    sub_2213A60(&StringLiteral_26410/*"zoomSize"*/);
    sub_2213A60(&StringLiteral_17489/*"animWaitTime"*/);
    sub_2213A60(&StringLiteral_25435/*"touchFocusCameraInfo"*/);
    sub_2213A60(&StringLiteral_19611/*"easingType"*/);
    sub_2213A60(&StringLiteral_22767/*"moveBaseDistance"*/);
    sub_2213A60(&StringLiteral_22768/*"moveBaseDuration"*/);
    byte_5970D69 = 1;
  }
  v7 = StringLiteral_25435/*"touchFocusCameraInfo"*/;
  MapGimmickEntity_TypeInfo->static_fields->TouchFocusCameraInfoKeyName = (struct System_String_o *)StringLiteral_25435/*"touchFocusCameraInfo"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)MapGimmickEntity_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_26410/*"zoomSize"*/;
  static_fields = MapGimmickEntity_TypeInfo->static_fields;
  static_fields->TouchFocusCameraZoomSizeKeyName = (struct System_String_o *)StringLiteral_26410/*"zoomSize"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->TouchFocusCameraZoomSizeKeyName,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_22768/*"moveBaseDuration"*/;
  v17 = MapGimmickEntity_TypeInfo->static_fields;
  v17->TouchFocusCameraMoveBaseDurationKeyName = (struct System_String_o *)StringLiteral_22768/*"moveBaseDuration"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->TouchFocusCameraMoveBaseDurationKeyName,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_22767/*"moveBaseDistance"*/;
  v25 = MapGimmickEntity_TypeInfo->static_fields;
  v25->TouchFocusCameraMoveBaseDistanceKeyName = (struct System_String_o *)StringLiteral_22767/*"moveBaseDistance"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v25->TouchFocusCameraMoveBaseDistanceKeyName,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_19611/*"easingType"*/;
  v33 = MapGimmickEntity_TypeInfo->static_fields;
  v33->TouchFocusCameraEasingTypeKeyName = (struct System_String_o *)StringLiteral_19611/*"easingType"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33->TouchFocusCameraEasingTypeKeyName,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_17489/*"animWaitTime"*/;
  v41 = MapGimmickEntity_TypeInfo->static_fields;
  v41->TouchFocusCameraAfterAnimWaitTimeKeyName = (struct System_String_o *)StringLiteral_17489/*"animWaitTime"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v41->TouchFocusCameraAfterAnimWaitTimeKeyName,
    v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


void MapGimmickEntity___ctor(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D68 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970D68 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t MapGimmickEntity__CreatePrimaryKey(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *MapGimmickEntity__GetColorCodeFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D58 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18849/*"color"*/);
    byte_5970D58 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_18849/*"color"*/, v2);
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

  if ( (byte_5970D52 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_21791/*"info"*/);
    byte_5970D52 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  StringFromScript = MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_21791/*"info"*/, v4);
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
            sub_2213CE4(ScriptType);
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
        sub_2213CDC(ScriptType, v8);
      }
    }
  }
  return v3;
}


int32_t MapGimmickEntity__GetIntFromScript(MapGimmickEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D5C & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5970D5C = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
      LODWORD(script) = System_Convert__ToInt32(v7, 0);
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

  if ( (byte_5970D57 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24126/*"raidDispSpotId"*/);
    byte_5970D57 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24126/*"raidDispSpotId"*/, v2);
}


int32_t MapGimmickEntity__GetScriptType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D51 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25559/*"type"*/);
    byte_5970D51 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_25559/*"type"*/, v2);
}


System_String_o *MapGimmickEntity__GetStringFromScript(
        MapGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970D5B = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    return 0;
  if ( value->klass == (Il2CppClass *)qword_5984390 )
    return (System_String_o *)value;
  return 0;
}


System_String_o *MapGimmickEntity__GetSubTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D56 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25068/*"subTitle"*/);
    byte_5970D56 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_25068/*"subTitle"*/, v2);
}


System_String_o *MapGimmickEntity__GetTitleFromScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D55 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25393/*"title"*/);
    byte_5970D55 = 1;
  }
  return MapGimmickEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_25393/*"title"*/, v2);
}


float MapGimmickEntity__GetTouchFocusCameraAfterAnimWaitTime(MapGimmickEntity_o *this, const MethodInfo *method)
{
  bool HasTouchFocusCameraInfo; // w0
  const MethodInfo *v4; // x1
  float result; // s0
  System_Collections_Generic_Dictionary_string__object__o *TouchFocusCameraInfo; // x0
  __int64 v7; // x1
  MapGimmickEntity_c *v8; // x8
  System_Collections_Generic_Dictionary_string__object__o *v9; // x19

  if ( (byte_5970D67 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D67 = 1;
  }
  HasTouchFocusCameraInfo = MapGimmickEntity__HasTouchFocusCameraInfo(this, method);
  result = 0.0;
  if ( HasTouchFocusCameraInfo )
  {
    TouchFocusCameraInfo = MapGimmickEntity__GetTouchFocusCameraInfo(this, v4);
    v8 = MapGimmickEntity_TypeInfo;
    v9 = TouchFocusCameraInfo;
    if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, v7);
      v8 = MapGimmickEntity_TypeInfo;
    }
    result = EntityScriptUtil__GetFloatValue(v9, v8->static_fields->TouchFocusCameraAfterAnimWaitTimeKeyName, 0.0, 0);
    if ( result < 0.0 )
      return 0.0;
  }
  return result;
}


int32_t MapGimmickEntity__GetTouchFocusCameraEasingType(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Dictionary_string__object__o *TouchFocusCameraInfo; // x0
  __int64 v5; // x1
  MapGimmickEntity_c *v6; // x8
  System_Collections_Generic_Dictionary_string__object__o *v7; // x19

  if ( (byte_5970D66 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D66 = 1;
  }
  if ( !MapGimmickEntity__HasTouchFocusCameraInfo(this, method) )
    return 15;
  TouchFocusCameraInfo = MapGimmickEntity__GetTouchFocusCameraInfo(this, v3);
  v6 = MapGimmickEntity_TypeInfo;
  v7 = TouchFocusCameraInfo;
  if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, v5);
    v6 = MapGimmickEntity_TypeInfo;
  }
  return EntityScriptUtil__GetIntValue(v7, v6->static_fields->TouchFocusCameraEasingTypeKeyName, 15, 0);
}


System_Collections_Generic_Dictionary_string__object__o *MapGimmickEntity__GetTouchFocusCameraInfo(
        MapGimmickEntity_o *this,
        const MethodInfo *method)
{
  MapGimmickEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_5970D62 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D62 = 1;
  }
  v3 = MapGimmickEntity_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, method);
    v3 = MapGimmickEntity_TypeInfo;
  }
  return EntityScriptUtil__GetInScript(script, v3->static_fields->TouchFocusCameraInfoKeyName, 0);
}


float MapGimmickEntity__GetTouchFocusCameraMoveBaseDistance(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Dictionary_string__object__o *TouchFocusCameraInfo; // x0
  __int64 v5; // x1
  MapGimmickEntity_c *v6; // x8
  System_Collections_Generic_Dictionary_string__object__o *v7; // x19

  if ( (byte_5970D65 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D65 = 1;
  }
  if ( !MapGimmickEntity__HasTouchFocusCameraInfo(this, method) )
    return 0.0;
  TouchFocusCameraInfo = MapGimmickEntity__GetTouchFocusCameraInfo(this, v3);
  v6 = MapGimmickEntity_TypeInfo;
  v7 = TouchFocusCameraInfo;
  if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, v5);
    v6 = MapGimmickEntity_TypeInfo;
  }
  return EntityScriptUtil__GetFloatValue(v7, v6->static_fields->TouchFocusCameraMoveBaseDistanceKeyName, 450.0, 0);
}


float MapGimmickEntity__GetTouchFocusCameraMoveBaseDuration(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Dictionary_string__object__o *TouchFocusCameraInfo; // x0
  __int64 v5; // x1
  MapGimmickEntity_c *v6; // x8
  System_Collections_Generic_Dictionary_string__object__o *v7; // x19

  if ( (byte_5970D64 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D64 = 1;
  }
  if ( !MapGimmickEntity__HasTouchFocusCameraInfo(this, method) )
    return 0.0;
  TouchFocusCameraInfo = MapGimmickEntity__GetTouchFocusCameraInfo(this, v3);
  v6 = MapGimmickEntity_TypeInfo;
  v7 = TouchFocusCameraInfo;
  if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, v5);
    v6 = MapGimmickEntity_TypeInfo;
  }
  return EntityScriptUtil__GetFloatValue(v7, v6->static_fields->TouchFocusCameraMoveBaseDurationKeyName, 0.5, 0);
}


float MapGimmickEntity__GetTouchFocusCameraZoomSize(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Dictionary_string__object__o *TouchFocusCameraInfo; // x0
  __int64 v5; // x1
  MapGimmickEntity_c *v6; // x8
  System_Collections_Generic_Dictionary_string__object__o *v7; // x19

  if ( (byte_5970D63 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D63 = 1;
  }
  if ( !MapGimmickEntity__HasTouchFocusCameraInfo(this, method) )
    return 1.0;
  TouchFocusCameraInfo = MapGimmickEntity__GetTouchFocusCameraInfo(this, v3);
  v6 = MapGimmickEntity_TypeInfo;
  v7 = TouchFocusCameraInfo;
  if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, v5);
    v6 = MapGimmickEntity_TypeInfo;
  }
  return EntityScriptUtil__GetFloatValue(v7, v6->static_fields->TouchFocusCameraZoomSizeKeyName, 1.0, 0);
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

  if ( (byte_5970D53 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25436/*"touchH"*/);
    sub_2213A60(&StringLiteral_25438/*"touchW"*/);
    byte_5970D53 = 1;
  }
  IntFromScript = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_25438/*"touchW"*/, v2);
  v6 = MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_25436/*"touchH"*/, v5);
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

  if ( (byte_5970D59 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25824/*"useAnim"*/);
    byte_5970D59 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_25824/*"useAnim"*/, v2);
}


bool MapGimmickEntity__HasTouchFocusCameraInfo(MapGimmickEntity_o *this, const MethodInfo *method)
{
  MapGimmickEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_5970D61 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickEntity_TypeInfo);
    byte_5970D61 = 1;
  }
  v3 = MapGimmickEntity_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapGimmickEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickEntity_TypeInfo, method);
    v3 = MapGimmickEntity_TypeInfo;
  }
  return EntityScriptUtil__ScriptHasKey(script, v3->static_fields->TouchFocusCameraInfoKeyName, 0);
}


bool MapGimmickEntity__InParentUIPanel(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D60 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21739/*"inParentUIPanel"*/);
    byte_5970D60 = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21739/*"inParentUIPanel"*/, v2) > 0;
}


bool MapGimmickEntity__IsCheckRaidProgress(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D5E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21913/*"isCheckRaidProgress"*/);
    byte_5970D5E = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21913/*"isCheckRaidProgress"*/, v2) > 0;
}


bool MapGimmickEntity__IsEnableTime(MapGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool MapGimmickEntity__IsEnabledBillBoard(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970D5A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21926/*"isEnabledBillBoard"*/);
    byte_5970D5A = 1;
  }
  return MapGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21926/*"isEnabledBillBoard"*/, v2) > 0;
}


bool MapGimmickEntity__IsEventMissionScript(MapGimmickEntity_o *this, const MethodInfo *method)
{
  return MapGimmickEntity__GetScriptType(this, method) == 1;
}


bool MapGimmickEntity__IsMonoColorRect(MapGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970D5D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20808/*"gimmickType"*/);
    byte_5970D5D = 1;
  }
  return MapGimmickEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20808/*"gimmickType"*/, -1, v2) == 1;
}


bool MapGimmickEntity__IsQuickHideOnTimeEnd(MapGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D5F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21975/*"isQuickHideOnTimeEnd"*/);
    byte_5970D5F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21975/*"isQuickHideOnTimeEnd"*/, 0, 0) > 0;
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
  __int64 v6; // x2
  MapGimmickEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = defVal;
  ScriptObj = MapGimmickEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_5984368, v6);
  sub_221405C(ScriptObj, qword_5984368, v6);
  return (unsigned int)MapGimmickEntity__GetTitleFromScript(v8, v9);
}


Il2CppObject *MapGimmickEntity__getScriptObj(MapGimmickEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D54 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5970D54 = 1;
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
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D50 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MapGimmickLayerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
    byte_5970D50 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapGimmickLayerMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.id,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_MapGimmickLayerMaster__MapGimmickLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}