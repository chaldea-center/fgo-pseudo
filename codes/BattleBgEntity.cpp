void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FAE1 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A6FAE1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4A6FADB & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_4A6FADB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2E8C440 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4A6FADE & 1) == 0 )
  {
    sub_1B90010(&float___TypeInfo, method);
    sub_1B90010(&StringLiteral_3982/*"CameraClippingFar"*/, v3);
    sub_1B90010(&StringLiteral_3983/*"CameraClippingNear"*/, v4);
    byte_4A6FADE = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3983/*"CameraClippingNear"*/, -1.0, 0LL);
  v6 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3982/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_1B900B8(float___TypeInfo, 2LL);
  if ( !result )
    sub_1B9026C(0LL, v8);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
    sub_1B90274(result, v8);
  result->m_Items[2] = v6;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FADF & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_7927/*"InvalidOverwrite"*/, method);
    byte_4A6FADF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7927/*"InvalidOverwrite"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4A6FAE0 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_12890/*"SpecialShadowEffectId"*/, *(_QWORD *)&defId);
    byte_4A6FAE0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12890/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleBgEntity___c_c *v7; // x0
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v9; // x21
  struct BattleBgEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6FADC & 1) == 0 )
  {
    sub_1B90010(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1B90010(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v3);
    sub_1B90010(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, v4);
    sub_1B90010(&BattleBgEntity___c_TypeInfo, v5);
    sub_1B90010(&StringLiteral_23640/*"subBgms"*/, v6);
    byte_4A6FADC = 1;
  }
  v7 = BattleBgEntity___c_TypeInfo;
  if ( !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v7 = BattleBgEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__object__o *)v7->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleBgEntity___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__10_0 = (System_Func_object__object__o *)sub_1B9025C(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v9, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0LL);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23640/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0LL,
                                   (const MethodInfo_2E96EE8 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FADD & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_23641/*"subBgmsPriority"*/, method);
    byte_4A6FADD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23641/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FAE2 & 1) == 0 )
  {
    sub_1B90010(&BattleBgEntity___c_TypeInfo, v1);
    byte_4A6FAE2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)BattleBgEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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