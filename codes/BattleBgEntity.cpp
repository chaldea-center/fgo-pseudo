void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC19B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC19B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4BDC192 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4BDC192 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2FAE028 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleBgEntity__CreatePrimaryKey(BattleBgEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleBgEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleBgEntity__GetAllSpecialShadowEffectIds(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDC199 & 1) == 0 )
  {
    sub_1C21E38(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    byte_4BDC199 = 1;
  }
  v5 = sub_1C22084(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 44) = defId;
  return (System_Collections_Generic_IEnumerable_int__o *)v5;
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

  if ( (byte_4BDC195 & 1) == 0 )
  {
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&StringLiteral_4073/*"CameraClippingFar"*/);
    sub_1C21E38(&StringLiteral_4074/*"CameraClippingNear"*/);
    byte_4BDC195 = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_4074/*"CameraClippingNear"*/, -1.0, 0LL);
  v4 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_4073/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !result )
    sub_1C22094(0LL, v6);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
    sub_1C2209C(result, v6);
  result->m_Items[2] = v4;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC196 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8100/*"InvalidOverwrite"*/);
    byte_4BDC196 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8100/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BattleBgEntity__GetShadowImage(BattleBgEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_String_o **v5; // x8

  if ( (byte_4BDC19A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10884/*"PlayerShadowImageId"*/);
    sub_1C21E38(&StringLiteral_6170/*"EnemyShadowImageId"*/);
    byte_4BDC19A = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6170/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10884/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, this->fields.imageId, 0LL);
}


int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        bool isEnemy,
        int32_t defId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 *v8; // x8
  System_String_o *v9; // x21
  int32_t IntValue; // w2

  if ( (byte_4BDC198 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13117/*"SpecialShadowEffectId"*/);
    sub_1C21E38(&StringLiteral_10885/*"PlayerSpecialShadowEffectId"*/);
    sub_1C21E38(&StringLiteral_6171/*"EnemySpecialShadowEffectId"*/);
    byte_4BDC198 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v8 = &StringLiteral_6171/*"EnemySpecialShadowEffectId"*/;
  else
    v8 = &StringLiteral_10885/*"PlayerSpecialShadowEffectId"*/;
  v9 = (System_String_o *)*v8;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_13117/*"SpecialShadowEffectId"*/, defId, 0LL);
  return EntityScriptUtil__GetIntValue(script, v9, IntValue, 0LL);
}


SubBgmPlayArgs_array *__fastcall BattleBgEntity__GetSubBgmPlayArgsArray(
        BattleBgEntity_o *this,
        const MethodInfo *method)
{
  BattleBgEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v5; // x21
  struct BattleBgEntity___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDC193 & 1) == 0 )
  {
    sub_1C21E38(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1C21E38(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1C21E38(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__);
    sub_1C21E38(&BattleBgEntity___c_TypeInfo);
    sub_1C21E38(&StringLiteral_24031/*"subBgms"*/);
    byte_4BDC193 = 1;
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
    _9__10_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v5, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0LL);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)_9__10_0, v7, v8, v9, v10, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_24031/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0LL,
                                   (const MethodInfo_2FB659C *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC194 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24032/*"subBgmsPriority"*/);
    byte_4BDC194 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24032/*"subBgmsPriority"*/, 0, 0LL);
}


bool __fastcall BattleBgEntity__IsAcceptedOverwrittenShadow(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC197 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_2233/*"AcceptOverwrittenShadow"*/);
    byte_4BDC197 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_2233/*"AcceptOverwrittenShadow"*/, 0, 0LL) == 1;
}


void __fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16___ctor(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__MoveNext(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  bool result; // w0
  struct BattleBgEntity_o *_4__this; // x8
  int32_t v5; // w20
  __int64 *v6; // x9

  if ( (byte_4BDC19D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13117/*"SpecialShadowEffectId"*/);
    sub_1C21E38(&StringLiteral_10885/*"PlayerSpecialShadowEffectId"*/);
    sub_1C21E38(&StringLiteral_6171/*"EnemySpecialShadowEffectId"*/);
    byte_4BDC19D = 1;
  }
  result = 0;
  _4__this = this->fields.__4__this;
  v5 = -1;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_12;
      v6 = &StringLiteral_13117/*"SpecialShadowEffectId"*/;
      v5 = 1;
      goto LABEL_10;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_12;
      v6 = &StringLiteral_10885/*"PlayerSpecialShadowEffectId"*/;
      v5 = 2;
      goto LABEL_10;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
LABEL_12:
        sub_1C22094(0LL, method);
      v6 = &StringLiteral_6171/*"EnemySpecialShadowEffectId"*/;
      v5 = 3;
LABEL_10:
      this->fields.__2__current = EntityScriptUtil__GetIntValue(
                                    _4__this->fields.script,
                                    (System_String_o *)*v6,
                                    this->fields.defId,
                                    0LL);
      result = 1;
      goto LABEL_11;
    case 3:
LABEL_11:
      this->fields.__1__state = v5;
      break;
    default:
      return result;
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *__fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *v4; // x20
  struct BattleBgEntity_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_IEnumerator_int__o *result; // x0

  if ( (byte_4BDC19F & 1) == 0 )
  {
    sub_1C21E38(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    byte_4BDC19F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *)sub_1C22084(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.__4__this, (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
  }
  result = (System_Collections_Generic_IEnumerator_int__o *)v4;
  v4->fields.defId = this->fields.__3__defId;
  return result;
}


int32_t __fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_IEnumerator_Reset(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_IEnumerator_get_Current(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDC19E & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    byte_4BDC19E = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current, v2, v3, v4);
}


void __fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_IDisposable_Dispose(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBgEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC19C & 1) == 0 )
  {
    sub_1C21E38(&BattleBgEntity___c_TypeInfo);
    byte_4BDC19C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleBgEntity___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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