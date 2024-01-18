void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AC5B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AC5B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_418AC55 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_418AC55 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v10; // x0

  if ( (byte_418AC58 & 1) == 0 )
  {
    sub_B2C35C(&float___TypeInfo, method);
    sub_B2C35C(&StringLiteral_3475/*"CameraClippingFar"*/, v3);
    sub_B2C35C(&StringLiteral_3476/*"CameraClippingNear"*/, v4);
    byte_418AC58 = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3476/*"CameraClippingNear"*/, -1.0, 0LL);
  v6 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3475/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_B2C374(float___TypeInfo, 2LL);
  if ( !result )
    sub_B2C434(0LL, v8);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
  {
    v10 = sub_B2C460(result);
    sub_B2C400(v10, 0LL);
  }
  result->m_Items[2] = v6;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AC59 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8070/*"InvalidOverwrite"*/, method);
    byte_418AC59 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8070/*"InvalidOverwrite"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_418AC5A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12960/*"SpecialShadowEffectId"*/, *(_QWORD *)&defId);
    byte_418AC5A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12960/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBgEntity___c_c *v8; // x0
  struct BattleBgEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct BattleBgEntity___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418AC56 & 1) == 0 )
  {
    sub_B2C35C(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_B2C35C(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__, v3);
    sub_B2C35C(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v4);
    sub_B2C35C(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__, v5);
    sub_B2C35C(&BattleBgEntity___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22374/*"subBgms"*/, v7);
    byte_418AC56 = 1;
  }
  v8 = BattleBgEntity___c_TypeInfo;
  if ( (BYTE3(BattleBgEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v8 = BattleBgEntity___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__8_0,
      v11,
      Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__,
      (const MethodInfo_2713350 *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v12 = BattleBgEntity___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22374/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__8_0,
                                   0LL,
                                   (const MethodInfo_1735FA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AC57 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22375/*"subBgmsPriority"*/, method);
    byte_418AC57 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22375/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A26 & 1) == 0 )
  {
    sub_B2C35C(&BattleBgEntity___c_TypeInfo, v1);
    byte_4186A26 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBgEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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