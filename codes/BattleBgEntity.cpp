void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B15E62 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4B15E5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type, method);
    byte_4B15E5C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float Millesimal; // s8
  float v9; // s9
  System_Single_array *result; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B15E5F & 1) == 0 )
  {
    sub_1BCA7E0(&float___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_4047/*"CameraClippingFar"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_4048/*"CameraClippingNear"*/, v6, v7);
    byte_4B15E5F = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_4048/*"CameraClippingNear"*/, -1.0, 0LL);
  v9 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_4047/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_1BCA888(float___TypeInfo, 2LL);
  if ( !result )
    sub_1BCAA3C(0LL, v11);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
    sub_1BCAA44(result, v11);
  result->m_Items[2] = v9;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E60 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8048/*"InvalidOverwrite"*/, method, v2);
    byte_4B15E60 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8048/*"InvalidOverwrite"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4B15E61 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13025/*"SpecialShadowEffectId"*/, *(_QWORD *)&defId, method);
    byte_4B15E61 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13025/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleBgEntity___c_c *v13; // x0
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v15; // x21
  struct BattleBgEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B15E5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method, v2);
    sub_1BCA7E0(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, v7, v8);
    sub_1BCA7E0(&BattleBgEntity___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23851/*"subBgms"*/, v11, v12);
    byte_4B15E5D = 1;
  }
  v13 = BattleBgEntity___c_TypeInfo;
  if ( !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo, method);
    v13 = BattleBgEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__object__o *)v13->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = BattleBgEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__10_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_List_object___SubBgmPlayArgs____TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__object____ctor(_9__10_0, v15, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0LL);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23851/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0LL,
                                   (const MethodInfo_2F19B3C *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E5E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23852/*"subBgmsPriority"*/, method, v2);
    byte_4B15E5E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23852/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E63 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBgEntity___c_TypeInfo, v1, v2);
    byte_4B15E63 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleBgEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleBgEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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