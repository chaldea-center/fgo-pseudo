void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC0FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC0FD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC0F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, type, (_DWORD)method, v3);
    byte_42EC0F7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float Millesimal; // s8
  float v12; // s9
  System_Single_array *result; // x0
  __int64 v14; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v16; // x0

  if ( (byte_42EC0FA & 1) == 0 )
  {
    sub_B5D5C4(&float___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3541/*"CameraClippingFar"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3542/*"CameraClippingNear"*/, v8, v9, v10);
    byte_42EC0FA = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3542/*"CameraClippingNear"*/, -1.0, 0LL);
  v12 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3541/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_B5D5DC(float___TypeInfo, 2LL);
  if ( !result )
    sub_B5D69C(0LL, v14);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
  {
    v16 = sub_B5D6C8(result);
    sub_B5D668(v16, 0LL);
  }
  result->m_Items[2] = v12;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC0FB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8154/*"InvalidOverwrite"*/, (_DWORD)method, v2, v3);
    byte_42EC0FB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8154/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC0FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13116/*"SpecialShadowEffectId"*/, defId, (_DWORD)method, v3);
    byte_42EC0FC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13116/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleBgEntity___c_c *v20; // x0
  struct BattleBgEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__8_0; // x20
  Il2CppObject *v23; // x21
  struct BattleBgEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42EC0F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__, v11, v12, v13);
    sub_B5D5C4(&BattleBgEntity___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22677/*"subBgms"*/, v17, v18, v19);
    byte_42EC0F8 = 1;
  }
  v20 = BattleBgEntity___c_TypeInfo;
  if ( (BYTE3(BattleBgEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v20 = BattleBgEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__8_0,
      v23,
      Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v24 = BattleBgEntity___c_TypeInfo->static_fields;
    v24->__9__8_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22677/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__8_0,
                                   0LL,
                                   (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC0F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22678/*"subBgmsPriority"*/, (_DWORD)method, v2, v3);
    byte_42EC0F9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22678/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7BDE & 1) == 0 )
  {
    sub_B5D5C4(&BattleBgEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7BDE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleBgEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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