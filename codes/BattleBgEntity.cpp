void BattleBgEntity___ctor(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30614 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30614 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleBgEntity__CreatePK(int32_t id, int32_t type, const MethodInfo *method)
{
  if ( (byte_4D3060B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D3060B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           type,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D30612 & 1) == 0 )
  {
    sub_1C93AD4(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    byte_4D30612 = 1;
  }
  v5 = sub_1C93D20(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4D3060E & 1) == 0 )
  {
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&StringLiteral_3988/*"CameraClippingFar"*/);
    sub_1C93AD4(&StringLiteral_3989/*"CameraClippingNear"*/);
    byte_4D3060E = 1;
  }
  Millesimal = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3989/*"CameraClippingNear"*/, -1.0, 0);
  v4 = EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_3988/*"CameraClippingFar"*/, -1.0, 0);
  result = (System_Single_array *)sub_1C93B7C(float___TypeInfo, 2);
  if ( !result )
    sub_1C93D2C(0, v6);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[0] = Millesimal, max_length == 1) )
    sub_1C93D34(result);
  result->m_Items[1] = v4;
  return result;
}


int32_t BattleBgEntity__GetInvalidOverwrite(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3060F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7993/*"InvalidOverwrite"*/);
    byte_4D3060F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7993/*"InvalidOverwrite"*/, 0, 0);
}


int32_t BattleBgEntity__GetShadowImage(BattleBgEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_String_o **v5; // x8

  if ( (byte_4D30613 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10761/*"PlayerShadowImageId"*/);
    sub_1C93AD4(&StringLiteral_6076/*"EnemyShadowImageId"*/);
    byte_4D30613 = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6076/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10761/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, this->fields.imageId, 0);
}


int32_t BattleBgEntity__GetSpecialShadowEffectId(
        BattleBgEntity_o *this,
        bool isEnemy,
        int32_t defId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 *v8; // x8
  System_String_o *v9; // x21
  int32_t IntValue; // w2

  if ( (byte_4D30611 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13063/*"SpecialShadowEffectId"*/);
    sub_1C93AD4(&StringLiteral_10762/*"PlayerSpecialShadowEffectId"*/);
    sub_1C93AD4(&StringLiteral_6077/*"EnemySpecialShadowEffectId"*/);
    byte_4D30611 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v8 = &StringLiteral_6077/*"EnemySpecialShadowEffectId"*/;
  else
    v8 = &StringLiteral_10762/*"PlayerSpecialShadowEffectId"*/;
  v9 = (System_String_o *)*v8;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_13063/*"SpecialShadowEffectId"*/, defId, 0);
  return EntityScriptUtil__GetIntValue(script, v9, IntValue, 0);
}


SubBgmPlayArgs_array *BattleBgEntity__GetSubBgmPlayArgsArray(BattleBgEntity_o *this, const MethodInfo *method)
{
  BattleBgEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__10_0; // x20
  Il2CppObject *v5; // x21
  struct BattleBgEntity___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D3060C & 1) == 0 )
  {
    sub_1C93AD4(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1C93AD4(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1C93AD4(&Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__);
    sub_1C93AD4(&BattleBgEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_24056/*"subBgms"*/);
    byte_4D3060C = 1;
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
    _9__10_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__10_0, v5, Method_BattleBgEntity___c__GetSubBgmPlayArgsArray_b__10_0__, 0);
    static_fields = BattleBgEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__10_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v7, v8, v9, v10, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_24056/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__10_0,
                                   0,
                                   (const MethodInfo_31AB334 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t BattleBgEntity__GetSubBgmsPriority(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3060D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24057/*"subBgmsPriority"*/);
    byte_4D3060D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24057/*"subBgmsPriority"*/, 0, 0);
}


bool BattleBgEntity__IsAcceptedOverwrittenShadow(BattleBgEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30610 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_2114/*"AcceptOverwrittenShadow"*/);
    byte_4D30610 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_2114/*"AcceptOverwrittenShadow"*/, 0, 0) == 1;
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
  bool result; // w0
  struct BattleBgEntity_o *_4__this; // x8
  int32_t v5; // w20
  __int64 *v6; // x9

  if ( (byte_4D30616 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13063/*"SpecialShadowEffectId"*/);
    sub_1C93AD4(&StringLiteral_10762/*"PlayerSpecialShadowEffectId"*/);
    sub_1C93AD4(&StringLiteral_6077/*"EnemySpecialShadowEffectId"*/);
    byte_4D30616 = 1;
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
      v6 = &StringLiteral_13063/*"SpecialShadowEffectId"*/;
      v5 = 1;
      goto LABEL_10;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_12;
      v6 = &StringLiteral_10762/*"PlayerSpecialShadowEffectId"*/;
      v5 = 2;
      goto LABEL_10;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
LABEL_12:
        sub_1C93D2C(0, method);
      v6 = &StringLiteral_6077/*"EnemySpecialShadowEffectId"*/;
      v5 = 3;
LABEL_10:
      this->fields.__2__current = EntityScriptUtil__GetIntValue(
                                    _4__this->fields.script,
                                    (System_String_o *)*v6,
                                    this->fields.defId,
                                    0);
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


System_Collections_Generic_IEnumerator_int__o *BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *v4; // x20
  struct BattleBgEntity_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D30618 & 1) == 0 )
  {
    sub_1C93AD4(&BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    byte_4D30618 = 1;
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
    v4 = (BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *)sub_1C93D20(BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleBgEntity__GetAllSpecialShadowEffectIds_d__16__System_Collections_IEnumerator_get_Current(
        BattleBgEntity__GetAllSpecialShadowEffectIds_d__16_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D30617 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D30617 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30615 & 1) == 0 )
  {
    sub_1C93AD4(&BattleBgEntity___c_TypeInfo);
    byte_4D30615 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleBgEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleBgEntity___c_TypeInfo->static_fields->__9 = (struct BattleBgEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleBgEntity___c_TypeInfo->static_fields,
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