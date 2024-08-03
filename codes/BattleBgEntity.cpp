void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC093 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC093 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_49FC08D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_49FC08D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleBgEntity__CreatePrimaryKey(BattleBgEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleBgEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


System_Single_array *__fastcall BattleBgEntity__GetCameraClippingRange(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float Millesimal; // s8
  float v6; // s9
  System_Single_array *result; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FC090 & 1) == 0 )
  {
    sub_1B640C8(&float___TypeInfo, method);
    sub_1B640C8(&StringLiteral_3958/*"CameraClippingFar"*/, v3);
    sub_1B640C8(&StringLiteral_3959/*"CameraClippingNear"*/, v4);
    byte_49FC090 = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3959/*"CameraClippingNear"*/, -1.0, 0LL);
  v6 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3958/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_1B64170(float___TypeInfo, 2LL);
  if ( !result )
    sub_1B64324(0LL);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
    sub_1B6432C(result, v8);
  result->m_Items[2] = v6;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC091 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7888/*"InvalidOverwrite"*/, method);
    byte_49FC091 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7888/*"InvalidOverwrite"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_49FC092 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12801/*"SpecialShadowEffectId"*/, *(_QWORD *)&defId);
    byte_49FC092 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12801/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBgEntity___c_c *v8; // x0
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v10; // x21
  struct BattleBgEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FC08E & 1) == 0 )
  {
    sub_1B640C8(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1B640C8(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v4);
    sub_1B640C8(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, v5);
    sub_1B640C8(&BattleBgEntity___c_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23506/*"subBgms"*/, v7);
    byte_49FC08E = 1;
  }
  v8 = BattleBgEntity___c_TypeInfo;
  if ( !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v8 = BattleBgEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__object__o *)v8->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleBgEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__10_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_List_object___SubBgmPlayArgs____TypeInfo,
                                                  method,
                                                  v2);
    System_Func_object__object____ctor(_9__10_0, v10, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0LL);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v12, v13);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23506/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0LL,
                                   (const MethodInfo_2E420B8 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC08F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23507/*"subBgmsPriority"*/, method);
    byte_49FC08F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23507/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC094 & 1) == 0 )
  {
    sub_1B640C8(&BattleBgEntity___c_TypeInfo, v1);
    byte_49FC094 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleBgEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleBgEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BattleBgEntity___c___ctor(BattleBgEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity___c___GetSubBgmPlayArgsArray_b__10_0(
        BattleBgEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0LL);
}