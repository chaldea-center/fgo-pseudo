void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B35FB & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B35FB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_42B35F5 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B35F5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  float Millesimal; // s8
  float v4; // s9
  System_Single_array *result; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  if ( (byte_42B35F8 & 1) == 0 )
  {
    sub_B52984(&float___TypeInfo);
    sub_B52984(&StringLiteral_3508/*"CameraClippingFar"*/);
    sub_B52984(&StringLiteral_3509/*"CameraClippingNear"*/);
    byte_42B35F8 = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3509/*"CameraClippingNear"*/, -1.0, 0LL);
  v4 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3508/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_B5299C(float___TypeInfo, 2LL);
  if ( !result )
    sub_B52A5C(0LL, v6);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
  {
    v8 = sub_B52A88(result);
    sub_B52A28(v8, 0LL);
  }
  result->m_Items[2] = v4;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B35F9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8117/*"InvalidOverwrite"*/);
    byte_42B35F9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8117/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_42B35FA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13057/*"SpecialShadowEffectId"*/);
    byte_42B35FA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13057/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  BattleBgEntity___c_c *v3; // x0
  struct BattleBgEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__8_0; // x20
  Il2CppObject *v6; // x21
  struct BattleBgEntity___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B35F6 & 1) == 0 )
  {
    sub_B52984(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_B52984(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    sub_B52984(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_B52984(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__);
    sub_B52984(&BattleBgEntity___c_TypeInfo);
    sub_B52984(&StringLiteral_22562/*"subBgms"*/);
    byte_42B35F6 = 1;
  }
  v3 = BattleBgEntity___c_TypeInfo;
  if ( (BYTE3(BattleBgEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v3 = BattleBgEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__8_0,
      v6,
      Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v7 = BattleBgEntity___c_TypeInfo->static_fields;
    v7->__9__8_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__8_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v7->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22562/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__8_0,
                                   0LL,
                                   (const MethodInfo_1A51738 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B35F7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22563/*"subBgmsPriority"*/);
    byte_42B35F7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22563/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF0EF & 1) == 0 )
  {
    sub_B52984(&BattleBgEntity___c_TypeInfo);
    byte_42AF0EF = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBgEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleBgEntity___c___ctor(BattleBgEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity___c___GetSubBgmPlayArgsArray_b__8_0(
        BattleBgEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0LL);
}