void __fastcall WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Int32_array **p_tacticalIds; // x19
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FFB2D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v3);
    byte_49FFB2D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  this->fields.groupId = 0;
  v4 = (int)StringLiteral_1/*""*/;
  this->fields.masterName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.masterName, v4, v5, v6);
  this->fields.masterImageId = 0;
  this->fields.servants = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.servants, 0, v7, v8);
  this->fields.svtEquipIds = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.svtEquipIds, 0, v9, v10);
  this->fields.aiIds = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.aiIds, 0, v11, v12);
  this->fields.ratingBaseIds = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.ratingBaseIds, 0, v13, v14);
  this->fields.tacticalIds = 0LL;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_tacticalIds, 0, v16, v17);
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_BA2880;
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
}


void __fastcall WarBoardStageNpcEntity___ctor_40031088(
        WarBoardStageNpcEntity_o *this,
        WarBoardStageNpcEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *masterName; // x1
  struct System_Int64_array *servants; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int64_array *svtEquipIds; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Int32_array *aiIds; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Int32_array *ratingBaseIds; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Int32_array *tacticalIds; // x1
  struct System_Int32_array **p_tacticalIds; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49FFB2E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_49FFB2E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64C5C(v5, v6);
  *(_QWORD *)&this->fields.stageId = *(_QWORD *)&cSrc->fields.stageId;
  this->fields.groupId = cSrc->fields.groupId;
  masterName = cSrc->fields.masterName;
  this->fields.masterName = masterName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.masterName, (int32_t)masterName, v7, v8);
  this->fields.masterImageId = cSrc->fields.masterImageId;
  servants = cSrc->fields.servants;
  this->fields.servants = servants;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.servants, (int32_t)servants, v11, v12);
  svtEquipIds = cSrc->fields.svtEquipIds;
  this->fields.svtEquipIds = svtEquipIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.svtEquipIds, (int32_t)svtEquipIds, v14, v15);
  aiIds = cSrc->fields.aiIds;
  this->fields.aiIds = aiIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.aiIds, (int32_t)aiIds, v17, v18);
  ratingBaseIds = cSrc->fields.ratingBaseIds;
  this->fields.ratingBaseIds = ratingBaseIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.ratingBaseIds, (int32_t)ratingBaseIds, v20, v21);
  tacticalIds = cSrc->fields.tacticalIds;
  this->fields.tacticalIds = tacticalIds;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_tacticalIds, (int32_t)tacticalIds, v24, v25);
  *(_OWORD *)(p_tacticalIds + 1) = *(_OWORD *)&cSrc->fields.searchDepth;
  p_tacticalIds[3] = *(struct System_Int32_array **)&cSrc->fields.calcEllipsisMin;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageNpcEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_49FFB2C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&forceId);
    byte_49FFB2C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardStageNpcEntity__CreatePrimaryKey(
        WarBoardStageNpcEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardStageNpcEntity__CreatePK(this->fields.stageId, this->fields.forceId, this->fields.groupId, v2);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__GetDefenseTarget(
        WarBoardStageNpcEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_49FFB32 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_int___, method);
    sub_1B64A00(&StringLiteral_18477/*"defenseTarget"*/, v4);
    byte_49FFB32 = 1;
  }
  v5 = Method_System_Array_Empty_int___;
  v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v6 )
  {
    sub_1BB6938(Method_System_Array_Empty_int___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB68DC(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB68DC(v8);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_18477/*"defenseTarget"*/,
           **(System_Int32_array ***)(v8 + 184),
           v2);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  WarBoardStageNpcEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__22_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_49FFB30 & 1) == 0 )
  {
    sub_1B64A00(&System_Converter_object__int__TypeInfo, key);
    sub_1B64A00(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B64A00(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__, v9);
    sub_1B64A00(&WarBoardStageNpcEntity___c_TypeInfo, v10);
    byte_49FFB30 = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v12 = ScriptObjListParam;
  v13 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( !WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo);
    v13 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  _9__22_0 = v13->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = WarBoardStageNpcEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__22_0 = (System_Converter_object__int__o *)sub_1B64C4C(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__22_0,
      v15,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__,
      0LL);
    static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = _9__22_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__22_0,
                                                    (const MethodInfo_2D71A94 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1B64C5C(0LL, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFB31 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FFB31 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317D4F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *__fastcall WarBoardStageNpcEntity__getScriptObjListParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  WarBoardStageNpcEntity_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_49FFB2F & 1) == 0 )
  {
    sub_1B64A00(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_49FFB2F = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B64F1C(result);
      return (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(v7, v8, v9);
    }
  }
  return result;
}


void __fastcall WarBoardStageNpcEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FFB33 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardStageNpcEntity___c_TypeInfo, v1);
    byte_49FFB33 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(WarBoardStageNpcEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardStageNpcEntity___c_TypeInfo->static_fields->__9 = (struct WarBoardStageNpcEntity___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)WarBoardStageNpcEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall WarBoardStageNpcEntity___c___ctor(WarBoardStageNpcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardStageNpcEntity___c___getScriptIntArrayParam_b__22_0(
        WarBoardStageNpcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_49FFB34 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, x);
    byte_49FFB34 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0LL);
}