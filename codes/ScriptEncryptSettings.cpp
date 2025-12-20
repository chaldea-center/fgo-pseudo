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

  if ( (byte_4D2E829 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__);
    byte_4D2E829 = 1;
  }
  value = 0;
  result = (ScriptEncryptEntity_o *)this->fields.lookup;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)scriptName,
           &value,
           (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__) )
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

  if ( (byte_4D2E828 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__);
    byte_4D2E828 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.lookup;
  if ( result )
  {
    v6 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)scriptName,
           &value,
           (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TryGetValue__);
    if ( v6 )
    {
      if ( !value )
        sub_1C942F0(v6, v7);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  int v14; // w8
  unsigned int v15; // w21
  __int64 v16; // x2

  if ( (byte_4D2E827 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TypeInfo);
    byte_4D2E827 = 1;
  }
  if ( this->fields.settings )
  {
    v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v3,
      (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity___ctor__);
    this->fields.lookup = (struct System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__o *)v3;
    p_lookup = &this->fields.lookup;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_lookup, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    v13 = (__int64)*(p_lookup - 1);
    if ( !v13 )
      goto LABEL_12;
    v14 = *(_DWORD *)(v13 + 24);
    if ( v14 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= v14 )
          sub_1C942F8(v11);
        v16 = *(_QWORD *)(v13 + 8LL * (int)v15 + 32);
        if ( !v16 )
          break;
        v11 = (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup;
        if ( !*p_lookup )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          v11,
          *(Il2CppObject **)(v16 + 16),
          (Il2CppObject *)v16,
          (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__ScriptEncryptEntity__Add__);
        v14 = *(_DWORD *)(v13 + 24);
        if ( (int)++v15 >= v14 )
          return;
      }
LABEL_12:
      sub_1C942F0(v11, v12);
    }
  }
}