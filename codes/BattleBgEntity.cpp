void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD3A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FD3A2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_40FD39C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_40FD39C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v7; // x2
  System_Single_array *result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FD39F & 1) == 0 )
  {
    sub_B16FFC(&float___TypeInfo, method);
    sub_B16FFC(&StringLiteral_3461, v3);
    sub_B16FFC(&StringLiteral_3462, v4);
    byte_40FD39F = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3462, -1.0, 0LL);
  v6 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3461, -1.0, 0LL);
  result = (System_Single_array *)sub_B17014(float___TypeInfo, 2LL, v7);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
  {
    sub_B17100(result, v9, v10);
    sub_B170A0();
  }
  result->m_Items[2] = v6;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD3A0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8041, method);
    byte_40FD3A0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8041, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_40FD3A1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12904, *(_QWORD *)&defId);
    byte_40FD3A1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12904, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBgEntity___c_c *v11; // x0
  struct BattleBgEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__8_0; // x20
  Il2CppObject *v14; // x21
  struct BattleBgEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD39D & 1) == 0 )
  {
    sub_B16FFC(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_B16FFC(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__, v6);
    sub_B16FFC(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v7);
    sub_B16FFC(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__, v8);
    sub_B16FFC(&BattleBgEntity___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_22282, v10);
    byte_40FD39D = 1;
  }
  v11 = BattleBgEntity___c_TypeInfo;
  if ( (BYTE3(BattleBgEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v11 = BattleBgEntity___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_List_object___SubBgmPlayArgs____TypeInfo,
                                                                                                method,
                                                                                                v2,
                                                                                                v3,
                                                                                                v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__8_0,
      v14,
      Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__8_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v15 = BattleBgEntity___c_TypeInfo->static_fields;
    v15->__9__8_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22282,
                                   (System_Func_TSource__TDestination__o *)_9__8_0,
                                   0LL,
                                   (const MethodInfo_18C5838 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD39E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22283, method);
    byte_40FD39E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22283, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleBgEntity___c_StaticFields *static_fields; // x0

  if ( (byte_40F84C6 & 1) == 0 )
  {
    sub_B16FFC(&BattleBgEntity___c_TypeInfo, v1);
    byte_40F84C6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleBgEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleBgEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleBgEntity___c_o *)v5;
  sub_B16F98(static_fields, v5);
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