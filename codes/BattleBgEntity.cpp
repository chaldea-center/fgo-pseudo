void __fastcall BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E0F4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_string___ctor__, method);
    byte_4A4E0F4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3211E14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4A4E0EB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&type);
    byte_4A4E0EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_2F6BE40 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleBgEntity__CreatePrimaryKey(BattleBgEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleBgEntity__CreatePK(this->fields.id, this->fields.type, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_int__o *__fastcall BattleBgEntity__GetAllSpecialShadowEffectIds(
        BattleBgEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4E0F2 & 1) == 0 )
  {
    sub_1B863B8(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo, *(_QWORD *)&defId);
    byte_4A4E0F2 = 1;
  }
  v5 = sub_1B86604(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 44) = defId;
  return (System_Collections_Generic_IEnumerable_int__o *)v5;
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

  if ( (byte_4A4E0EE & 1) == 0 )
  {
    sub_1B863B8(&float___TypeInfo, method);
    sub_1B863B8(&StringLiteral_3947/*"CameraClippingFar"*/, v3);
    sub_1B863B8(&StringLiteral_3948/*"CameraClippingNear"*/, v4);
    byte_4A4E0EE = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3948/*"CameraClippingNear"*/, -1.0, 0LL);
  v6 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3947/*"CameraClippingFar"*/, -1.0, 0LL);
  result = (System_Single_array *)sub_1B86460(float___TypeInfo, 2LL);
  if ( !result )
    sub_1B86614(0LL, v8);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[1] = Millesimal, max_length == 1) )
    sub_1B8661C(result, v8);
  result->m_Items[2] = v6;
  return result;
}


int32_t __fastcall BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E0EF & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_7800/*"InvalidOverwrite"*/, method);
    byte_4A4E0EF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7800/*"InvalidOverwrite"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetShadowImage(BattleBgEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o **v6; // x8

  if ( (byte_4A4E0F3 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_10522/*"PlayerShadowImageId"*/, isEnemy);
    sub_1B863B8(&StringLiteral_5978/*"EnemyShadowImageId"*/, v5);
    byte_4A4E0F3 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_5978/*"EnemyShadowImageId"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10522/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v6, this->fields.imageId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        bool isEnemy,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 *v10; // x8
  System_String_o *v11; // x21
  int32_t IntValue; // w2

  if ( (byte_4A4E0F1 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12746/*"SpecialShadowEffectId"*/, isEnemy);
    sub_1B863B8(&StringLiteral_10523/*"PlayerSpecialShadowEffectId"*/, v7);
    sub_1B863B8(&StringLiteral_5979/*"EnemySpecialShadowEffectId"*/, v8);
    byte_4A4E0F1 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v10 = &StringLiteral_5979/*"EnemySpecialShadowEffectId"*/;
  else
    v10 = &StringLiteral_10523/*"PlayerSpecialShadowEffectId"*/;
  v11 = (System_String_o *)*v10;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_12746/*"SpecialShadowEffectId"*/, defId, 0LL);
  return EntityScriptUtil__GetIntValue(script, v11, IntValue, 0LL);
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
  const MethodInfo *v12; // x3

  if ( (byte_4A4E0EC & 1) == 0 )
  {
    sub_1B863B8(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1B863B8(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v3);
    sub_1B863B8(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, v4);
    sub_1B863B8(&BattleBgEntity___c_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_23443/*"subBgms"*/, v6);
    byte_4A4E0EC = 1;
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
    _9__10_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v9, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0LL);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23443/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0LL,
                                   (const MethodInfo_2F763E0 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E0ED & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_23444/*"subBgmsPriority"*/, method);
    byte_4A4E0ED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23444/*"subBgmsPriority"*/, 0, 0LL);
}


bool __fastcall BattleBgEntity__IsAcceptedOverwrittenShadow(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E0F0 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_2114/*"AcceptOverwrittenShadow"*/, method);
    byte_4A4E0F0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_2114/*"AcceptOverwrittenShadow"*/, 0, 0LL) == 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  bool result; // w0
  struct BattleBgEntity_o *_4__this; // x8
  int32_t v7; // w20
  __int64 *v8; // x9

  if ( (byte_4A4E0F6 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12746/*"SpecialShadowEffectId"*/, method);
    sub_1B863B8(&StringLiteral_10523/*"PlayerSpecialShadowEffectId"*/, v3);
    sub_1B863B8(&StringLiteral_5979/*"EnemySpecialShadowEffectId"*/, v4);
    byte_4A4E0F6 = 1;
  }
  result = 0;
  _4__this = this->fields.__4__this;
  v7 = -1;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_12;
      v8 = &StringLiteral_12746/*"SpecialShadowEffectId"*/;
      v7 = 1;
      goto LABEL_10;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_12;
      v8 = &StringLiteral_10523/*"PlayerSpecialShadowEffectId"*/;
      v7 = 2;
      goto LABEL_10;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
LABEL_12:
        sub_1B86614(0LL, method);
      v8 = &StringLiteral_5979/*"EnemySpecialShadowEffectId"*/;
      v7 = 3;
LABEL_10:
      this->fields.__2__current = EntityScriptUtil__GetIntValue(
                                    _4__this->fields.script,
                                    (System_String_o *)*v8,
                                    this->fields.defId,
                                    0LL);
      result = 1;
      goto LABEL_11;
    case 3:
LABEL_11:
      this->fields.__1__state = v7;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerator_int__o *result; // x0

  if ( (byte_4A4E0F8 & 1) == 0 )
  {
    sub_1B863B8(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo, method);
    byte_4A4E0F8 = 1;
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
    v4 = (BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *)sub_1B86604(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_IEnumerator_get_Current(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4E0F7 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    byte_4A4E0F7 = 1;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E0F5 & 1) == 0 )
  {
    sub_1B863B8(&BattleBgEntity___c_TypeInfo, v1);
    byte_4A4E0F5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleBgEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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