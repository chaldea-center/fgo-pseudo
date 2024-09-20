void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5ADD6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4A5ADD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5ADD0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4A5ADD3 & 1) == 0 )
  {
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&StringLiteral_3981/*"CameraClippingFar"*/);
    sub_1B885B0(&StringLiteral_3982/*"CameraClippingNear"*/);
    byte_4A5ADD3 = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3982/*"CameraClippingNear"*/, -1.0, 0LL);
  v4 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3981/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_1B88658(float___TypeInfo, 2LL);
  if ( !result )
    sub_1B8880C(0LL, v6);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
    sub_1B88814(result, v6);
  result->m_Items[2] = v4;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADD4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7923/*"InvalidOverwrite"*/);
    byte_4A5ADD4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7923/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4A5ADD5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12865/*"SpecialShadowEffectId"*/);
    byte_4A5ADD5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12865/*"SpecialShadowEffectId"*/, defId, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  BattleBgEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v5; // x21
  struct BattleBgEntity___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5ADD1 & 1) == 0 )
  {
    sub_1B885B0(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1B885B0(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1B885B0(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__);
    sub_1B885B0(&BattleBgEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23603/*"subBgms"*/);
    byte_4A5ADD1 = 1;
  }
  v3 = BattleBgEntity___c_TypeInfo;
  if ( !BattleBgEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo);
    v3 = BattleBgEntity___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__object__o *)v3->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleBgEntity___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__10_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v5, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0LL);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v7, v8);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23603/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0LL,
                                   (const MethodInfo_2E885D4 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADD2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23604/*"subBgmsPriority"*/);
    byte_4A5ADD2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23604/*"subBgmsPriority"*/, 0, 0LL);
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ADD7 & 1) == 0 )
  {
    sub_1B885B0(&BattleBgEntity___c_TypeInfo);
    byte_4A5ADD7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleBgEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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