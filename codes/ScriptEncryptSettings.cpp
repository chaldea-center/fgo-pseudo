void ScriptEncryptSettings___ctor(ScriptEncryptSettings_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


ScriptEncryptEntity_o *ScriptEncryptSettings__GetEntity(
        ScriptEncryptSettings_o *this,
        System_String_o *scriptName,
        const MethodInfo *method)
{
  ScriptEncryptEntity_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB825C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__);
    byte_4CB825C = 1;
  }
  value = 0;
  result = (ScriptEncryptEntity_o *)this->fields.lookup;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)scriptName,
           &value,
           (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__) )
    {
      return (ScriptEncryptEntity_o *)value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *ScriptEncryptSettings__GetKey(
        ScriptEncryptSettings_o *this,
        System_String_o *scriptName,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *monitor; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB825B & 1) == 0 )
  {
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__);
    byte_4CB825B = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.lookup;
  if ( result )
  {
    v6 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)scriptName,
           &value,
           (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__);
    if ( v6 )
    {
      if ( !value )
        sub_1C6BC60(v6, v7);
      monitor = (System_String_o *)value[1].monitor;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      return CatAndMouseGame__GetAssetbundleKey(monitor, 0);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void ScriptEncryptSettings__OnEnable(ScriptEncryptSettings_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  struct System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__o **p_lookup; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_object__object__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x20
  int v10; // w8
  unsigned int v11; // w21
  __int64 v12; // x2

  if ( (byte_4CB825A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TypeInfo);
    byte_4CB825A = 1;
  }
  if ( this->fields.settings )
  {
    v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v3,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity___ctor__);
    this->fields.lookup = (struct System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__o *)v3;
    p_lookup = &this->fields.lookup;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_lookup, (int32_t)v3, v5, v6);
    v9 = (__int64)*(p_lookup - 1);
    if ( !v9 )
      goto LABEL_12;
    v10 = *(_DWORD *)(v9 + 24);
    if ( v10 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= v10 )
          sub_1C6BC68(v7);
        v12 = *(_QWORD *)(v9 + 8LL * (int)v11 + 32);
        if ( !v12 )
          break;
        v7 = (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup;
        if ( !*p_lookup )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          v7,
          *(Il2CppObject **)(v12 + 16),
          (Il2CppObject *)v12,
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__Add__);
        v10 = *(_DWORD *)(v9 + 24);
        if ( (int)++v11 >= v10 )
          return;
      }
LABEL_12:
      sub_1C6BC60(v7, v8);
    }
  }
}