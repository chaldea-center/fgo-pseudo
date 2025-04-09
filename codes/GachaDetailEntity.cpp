void __fastcall GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB0FE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB0FE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GachaDetailEntity__CreatePrimaryKey(GachaDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GachaDetailEntity__GetScriptInt(
        GachaDetailEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  GachaDetailEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_49BB0FB & 1) == 0 )
  {
    sub_1B4CF90(&long_TypeInfo, key);
    byte_49BB0FB = 1;
  }
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B4D4AC(ScriptObj);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v11, v12, v13, v14);
}


System_Int32_array *__fastcall GachaDetailEntity__GetScriptIntArray(
        GachaDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  GachaDetailEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__8_0; // x20
  Il2CppObject *v15; // x21
  struct GachaDetailEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_49BB0FC & 1) == 0 )
  {
    sub_1B4CF90(&System_Converter_object__int__TypeInfo, key);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B4CF90(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, v9);
    sub_1B4CF90(&GachaDetailEntity___c_TypeInfo, v10);
    byte_49BB0FC = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v12 = ScriptObjList;
  v13 = GachaDetailEntity___c_TypeInfo;
  if ( !GachaDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo);
    v13 = GachaDetailEntity___c_TypeInfo;
  }
  _9__8_0 = v13->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = GachaDetailEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__8_0 = (System_Converter_object__int__o *)sub_1B4D1DC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__8_0, v15, Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, 0LL);
    static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_2E390E4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1B4D1EC(0LL, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB0F9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49BB0F9 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


System_Collections_Generic_List_object__o *__fastcall GachaDetailEntity__GetScriptObjList(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  GachaDetailEntity_o *v7; // x0
  System_String_o *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49BB0FA & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_49BB0FA = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B4D4AC(result);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v7, v8, v9, v10);
    }
  }
  return result;
}


bool __fastcall GachaDetailEntity__HasText(GachaDetailEntity_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.title, 0LL)
      || !System_String__IsNullOrEmpty(this->fields.message, 0LL);
}


bool __fastcall GachaDetailEntity__IsPrivilegeSummon(
        GachaDetailEntity_o *this,
        int64_t *endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t ScriptInt; // w0
  int32_t v10; // w20
  __int64 v11; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  bool result; // w0
  int64_t v15; // [xsp+0h] [xbp-40h] BYREF
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BB0FD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserPrivilegeMaster___, endedAt);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_22334/*"privilegeId"*/, v8);
    byte_49BB0FD = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  ScriptInt = GachaDetailEntity__GetScriptInt(this, (System_String_o *)StringLiteral_22334/*"privilegeId"*/, -1, v3);
  if ( (ScriptInt & 0x80000000) == 0 )
  {
    v10 = ScriptInt;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v11);
      byte_49B57A5 = 1;
    }
    p_image = &NetworkManager_TypeInfo->_1.image;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      p_image = &NetworkManager_TypeInfo->_1.image;
    }
    if ( !Master_object )
      goto LABEL_18;
    if ( UserPrivilegeMaster__TryGetEntity(
           (UserPrivilegeMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(p_image[23] + 64LL),
           v10,
           0LL) )
    {
      p_image = &entity->klass;
      if ( entity )
      {
        UserPrivilegeEntity__IsValidPeriod(entity, &v15, endedAt, 0LL, 0LL);
        return 1;
      }
LABEL_18:
      sub_1B4D1EC(p_image, v11);
    }
  }
  result = 0;
  *endedAt = 0LL;
  return result;
}


void __fastcall GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB0FF & 1) == 0 )
  {
    sub_1B4CF90(&GachaDetailEntity___c_TypeInfo, v1);
    byte_49BB0FF = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(GachaDetailEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaDetailEntity___c_TypeInfo->static_fields->__9 = (struct GachaDetailEntity___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)GachaDetailEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall GachaDetailEntity___c___ctor(GachaDetailEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaDetailEntity___c___GetScriptIntArray_b__8_0(
        GachaDetailEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_49BB100 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, x);
    byte_49BB100 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0LL);
}