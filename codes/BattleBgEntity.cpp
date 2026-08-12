void BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597043E & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597043E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_5970435 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970435 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *BattleBgEntity__CreatePrimaryKey(BattleBgEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleBgEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


System_Collections_Generic_IEnumerable_int__o *BattleBgEntity__GetAllSpecialShadowEffectIds(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597043C & 1) == 0 )
  {
    sub_2213A60(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    byte_597043C = 1;
  }
  v5 = sub_2213CCC(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 44) = defId;
  return (System_Collections_Generic_IEnumerable_int__o *)v5;
}


System_Single_array *BattleBgEntity__GetCameraClippingRange(BattleBgEntity_o *this, const MethodInfo *method)
{
  float Millesimal; // s8
  float v4; // s9
  System_Single_array *result; // x0
  __int64 v6; // x1
  int max_length; // w8

  if ( (byte_5970438 & 1) == 0 )
  {
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&StringLiteral_4111/*"CameraClippingFar"*/);
    sub_2213A60(&StringLiteral_4112/*"CameraClippingNear"*/);
    byte_5970438 = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_4112/*"CameraClippingNear"*/, -1.0, 0);
  v4 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_4111/*"CameraClippingFar"*/, -1.0, 0);
  result = (System_Single_array *)sub_2213B20(float___TypeInfo, 2);
  if ( !result )
    sub_2213CDC(0, v6);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[0] = Millesimal, max_length == 1) )
    sub_2213CE4(result);
  result->m_Items[1] = v4;
  return result;
}


int32_t BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970439 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8288/*"InvalidOverwrite"*/);
    byte_5970439 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8288/*"InvalidOverwrite"*/, 0, 0);
}


int32_t BattleBgEntity__GetShadowImage(BattleBgEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_String_o **v5; // x8

  if ( (byte_597043D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11140/*"PlayerShadowImageId"*/);
    sub_2213A60(&StringLiteral_6304/*"EnemyShadowImageId"*/);
    byte_597043D = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6304/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11140/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, this->fields.imageId, 0);
}


int32_t BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        bool isEnemy,
        int32_t defId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  __int64 *v8; // x8
  System_String_o *v9; // x20
  int32_t IntValue; // w2

  if ( (byte_597043B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13514/*"SpecialShadowEffectId"*/);
    sub_2213A60(&StringLiteral_11141/*"PlayerSpecialShadowEffectId"*/);
    sub_2213A60(&StringLiteral_6305/*"EnemySpecialShadowEffectId"*/);
    byte_597043B = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v8 = &StringLiteral_6305/*"EnemySpecialShadowEffectId"*/;
  else
    v8 = &StringLiteral_11141/*"PlayerSpecialShadowEffectId"*/;
  v9 = (System_String_o *)*v8;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_13514/*"SpecialShadowEffectId"*/, defId, 0);
  return EntityScriptUtil__GetIntValue(script, v9, IntValue, 0);
}


SubBgmPlayArgs_array *BattleBgEntity__GetSubBgmPlayArgsArray(BattleBgEntity_o *this, const MethodInfo *method)
{
  BattleBgEntity___c_c *v3; // x0
  struct BattleBgEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct BattleBgEntity___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5970436 & 1) == 0 )
  {
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_2213A60(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_2213A60(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__);
    sub_2213A60(&BattleBgEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_25024/*"subBgms"*/);
    byte_5970436 = 1;
  }
  v3 = BattleBgEntity___c_TypeInfo;
  if ( !*(&BattleBgEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleBgEntity___c_TypeInfo, method);
    v3 = BattleBgEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__10_0 = (System_Func_object__object__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v6, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0);
    v7 = BattleBgEntity___c_TypeInfo->static_fields;
    v7->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__10_0, (int32_t)_9__10_0, v8, v9, v10, v11, v12, v13);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_25024/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0,
                                   (const MethodInfo_3861168 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970437 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25025/*"subBgmsPriority"*/);
    byte_5970437 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25025/*"subBgmsPriority"*/, 0, 0);
}


bool BattleBgEntity__IsAcceptedOverwrittenShadow(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597043A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_2202/*"AcceptOverwrittenShadow"*/);
    byte_597043A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_2202/*"AcceptOverwrittenShadow"*/, 0, 0) == 1;
}


void BattleBgEntity__GetAllSpecialShadowEffectIds_d__16___ctor(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__MoveNext(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w9
  struct BattleBgEntity_o *_4__this; // x8
  bool result; // w0
  int32_t v6; // w20
  __int64 *v7; // x9
  int32_t IntValue; // w8

  if ( (byte_5970440 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13514/*"SpecialShadowEffectId"*/);
    sub_2213A60(&StringLiteral_11141/*"PlayerSpecialShadowEffectId"*/);
    sub_2213A60(&StringLiteral_6305/*"EnemySpecialShadowEffectId"*/);
    byte_5970440 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  result = 0;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return result;
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v6 = 2;
        v7 = &StringLiteral_11141/*"PlayerSpecialShadowEffectId"*/;
LABEL_15:
        IntValue = EntityScriptUtil__GetIntValue(_4__this->fields.script, (System_String_o *)*v7, this->fields.defId, 0);
        result = 1;
        this->fields.__2__current = IntValue;
        goto LABEL_16;
      }
    }
    else
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v6 = 1;
        v7 = &StringLiteral_13514/*"SpecialShadowEffectId"*/;
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_2213CDC(0, method);
  }
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v6 = 3;
      v7 = &StringLiteral_6305/*"EnemySpecialShadowEffectId"*/;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if ( _1__state != 3 )
    return result;
  v6 = -1;
LABEL_16:
  this->fields.__1__state = v6;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct BattleBgEntity_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5970441 & 1) == 0 )
  {
    sub_2213A60(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    byte_5970441 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *)sub_2213CCC(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    v4->fields.__4__this = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
  }
  v4->fields.defId = this->fields.__3__defId;
  return (System_Collections_Generic_IEnumerator_int__o *)v4;
}


int32_t BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_IEnumerator_Reset(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_IEnumerator_get_Current(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &_2__current);
}


void BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_IDisposable_Dispose(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleBgEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597043F & 1) == 0 )
  {
    sub_2213A60(&BattleBgEntity___c_TypeInfo);
    byte_597043F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleBgEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleBgEntity___c___ctor(BattleBgEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


SubBgmPlayArgs_array *BattleBgEntity___c___GetSubBgmPlayArgsArray_b__10_0(
        BattleBgEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0);
}