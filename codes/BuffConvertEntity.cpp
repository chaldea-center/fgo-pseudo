void __fastcall BuffConvertEntity___ctor(BuffConvertEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4353EFD & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_4353EFD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BuffConvertEntity__CreatePrimaryKey(BuffConvertEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffId;
}


BuffEntity_o *__fastcall BuffConvertEntity__GetBuffEntity(
        BuffConvertEntity_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_4353EFA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4353EFA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v5);
  return (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           buffId,
                           (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


int32_t __fastcall BuffConvertEntity__GetConvertBuffIdFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *convertBuffIds; // x8
  unsigned int max_length; // w9
  __int64 v6; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  convertBuffIds = this->fields.convertBuffIds;
  if ( !convertBuffIds )
    sub_B7076C(this, index);
  max_length = convertBuffIds->max_length;
  if ( (int)(max_length - 1) < index )
    return 0;
  if ( max_length <= index )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  return convertBuffIds->m_Items[index + 1];
}


System_Int32_array *__fastcall BuffConvertEntity__GetEffectList(
        BuffConvertEntity_o *this,
        System_Int32_array *defs,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  __int64 v6; // x1
  __int64 v8; // x0

  if ( (byte_4353EF9 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_4353EF9 = 1;
  }
  if ( this->fields.effectId )
  {
    v5 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
    if ( !v5 )
      sub_B7076C(0LL, v6);
    defs = v5;
    if ( !v5->max_length )
    {
      v8 = sub_B70798(v5);
      sub_B70738(v8, 0LL);
    }
    v5->m_Items[1] = this->fields.effectId;
  }
  return defs;
}


int32_t __fastcall BuffConvertEntity__GetOverwritePopupColorFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        int32_t def,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4353EFC & 1) == 0 )
  {
    sub_B70694(&Method_BuffConvertEntity_GetParamFromIndex_int___);
    sub_B70694(&StringLiteral_10317/*"OverwritePopupColor"*/);
    byte_4353EFC = 1;
  }
  result = BuffConvertEntity__GetParamFromIndex_int_(
             this,
             (System_String_o *)StringLiteral_10317/*"OverwritePopupColor"*/,
             index,
             def,
             (const MethodInfo_1BE1954 *)Method_BuffConvertEntity_GetParamFromIndex_int___);
  if ( !result )
    return def;
  return result;
}


System_String_o *__fastcall BuffConvertEntity__GetOverwritePopupTextFromIndex(
        BuffConvertEntity_o *this,
        int32_t index,
        System_String_o *def,
        const MethodInfo *method)
{
  System_String_o *ParamFromIndex_string; // x20

  if ( (byte_4353EFB & 1) == 0 )
  {
    sub_B70694(&Method_BuffConvertEntity_GetParamFromIndex_string___);
    sub_B70694(&StringLiteral_10318/*"OverwritePopupText"*/);
    byte_4353EFB = 1;
  }
  ParamFromIndex_string = BuffConvertEntity__GetParamFromIndex_string_(
                            this,
                            (System_String_o *)StringLiteral_10318/*"OverwritePopupText"*/,
                            index,
                            def,
                            (const MethodInfo_1BE1B9C *)Method_BuffConvertEntity_GetParamFromIndex_string___);
  if ( System_String__IsNullOrEmpty(ParamFromIndex_string, 0LL) )
    return def;
  else
    return ParamFromIndex_string;
}


int32_t __fastcall BuffConvertEntity__GetParamFromIndex_int_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        int32_t def,
        const MethodInfo_1BE1954 *method)
{
  BuffConvertEntity_o *v9; // x23
  Il2CppObject *ScriptObject; // x0
  __int64 v11; // x22
  unsigned int v12; // w8
  Il2CppObject *v13; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  BuffConvertEntity_o *v16; // x20
  Il2CppClass *_1_T; // x19
  Il2CppObject *v19; // x20
  Il2CppType *v20; // x21
  System_Type_o *v21; // x21
  BuffConvertEntity_o *v22; // x0
  System_String_o *v23; // x1
  int32_t v24; // w2
  System_String_o *v25; // x3
  const MethodInfo_1BE1B9C *v26; // x4
  System_RuntimeTypeHandle_o v27; // 0:w0.4
  System_RuntimeTypeHandle_o v28; // 0:w0.4

  v9 = this;
  if ( (byte_4353FAD & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    this = (BuffConvertEntity_o *)sub_B70694(&System_Type_TypeInfo);
    byte_4353FAD = 1;
  }
  if ( !v9 )
    goto LABEL_32;
  ScriptObject = BuffConvertEntity__GetScriptObject(v9, key, 0LL);
  v11 = sub_B70754(ScriptObject, System_Collections_Generic_List_object__TypeInfo);
  this = (BuffConvertEntity_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return def;
  if ( !v11 )
    goto LABEL_32;
  v12 = *(_DWORD *)(v11 + 24);
  if ( v12 == 1 )
  {
    v13 = *(Il2CppObject **)(*(_QWORD *)(v11 + 16) + 32LL);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v27.fields.value = (int)_0_T;
    TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0LL);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    this = (BuffConvertEntity_o *)System_Convert__ChangeType_42420004(v13, TypeFromHandle, 0LL);
    v16 = this;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      this = (BuffConvertEntity_o *)sub_B08394(_1_T);
    if ( v16 )
      goto LABEL_16;
LABEL_32:
    sub_B7076C(this, key);
  }
  if ( (index & 0x80000000) != 0 || (int)(v12 - 1) < index )
    return def;
  if ( v12 <= index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v19 = *(Il2CppObject **)(*(_QWORD *)(v11 + 16) + 8LL * index + 32);
  v20 = method->rgctx_data->_0_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = (int)v20;
  v21 = System_Type__GetTypeFromHandle(v28, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  this = (BuffConvertEntity_o *)System_Convert__ChangeType_42420004(v19, v21, 0LL);
  v16 = this;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    this = (BuffConvertEntity_o *)sub_B08394(_1_T);
  if ( !v16 )
    goto LABEL_32;
LABEL_16:
  if ( v16->klass->_1.element_class == _1_T->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v16);
  sub_B70A60(v16);
  return (unsigned int)BuffConvertEntity__GetParamFromIndex_string_(v22, v23, v24, v25, v26);
}


System_String_o *__fastcall BuffConvertEntity__GetParamFromIndex_string_(
        BuffConvertEntity_o *this,
        System_String_o *key,
        int32_t index,
        System_String_o *def,
        const MethodInfo_1BE1B9C *method)
{
  BuffConvertEntity_o *v9; // x23
  Il2CppObject *ScriptObject; // x0
  __int64 v11; // x22
  unsigned int v12; // w8
  __int64 v13; // x8
  Il2CppObject *v14; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v17; // x21
  Il2CppClass *_1_T; // x19
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  v9 = this;
  if ( (byte_4353FAE & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    this = (BuffConvertEntity_o *)sub_B70694(&System_Type_TypeInfo);
    byte_4353FAE = 1;
  }
  if ( !v9 )
    goto LABEL_26;
  ScriptObject = BuffConvertEntity__GetScriptObject(v9, key, 0LL);
  v11 = sub_B70754(ScriptObject, System_Collections_Generic_List_object__TypeInfo);
  this = (BuffConvertEntity_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return def;
  if ( !v11 )
LABEL_26:
    sub_B7076C(this, key);
  v12 = *(_DWORD *)(v11 + 24);
  if ( v12 == 1 )
  {
    v13 = *(_QWORD *)(v11 + 16);
  }
  else
  {
    if ( (index & 0x80000000) != 0 || (int)(v12 - 1) < index )
      return def;
    if ( v12 <= index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v13 = *(_QWORD *)(v11 + 16) + 8LL * index;
  }
  v14 = *(Il2CppObject **)(v13 + 32);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v20.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v17 = System_Convert__ChangeType_42420004(v14, TypeFromHandle, 0LL);
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_1_T);
  if ( !v17 )
    return 0LL;
  def = (System_String_o *)sub_B70754(v17, _1_T);
  if ( !def )
  {
    sub_B70A60(v17);
    return 0LL;
  }
  return def;
}


Il2CppObject *__fastcall BuffConvertEntity__GetScriptObject(
        BuffConvertEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353EF7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4353EF7 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall BuffConvertEntity__IsTargetLimit(
        BuffConvertEntity_o *this,
        int32_t targetType,
        int32_t targetId,
        int32_t actorId,
        const MethodInfo *method)
{
  int32_t targetLimit; // w8

  targetLimit = this->fields.targetLimit;
  if ( !targetLimit )
    return 1;
  if ( targetLimit == 1 && targetId == actorId )
    return Target__Check(0, targetType, 0LL);
  return 0;
}


bool __fastcall BuffConvertEntity__TryGetConvertBuffIndex(
        BuffConvertEntity_o *this,
        int32_t *convertBuffIndex,
        int32_t buffId,
        System_Int32_array *addIndividuality,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Int32_array **BuffEntity; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BuffConvertEntity_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w8
  int32_t convertType; // w9
  struct System_Int32_array *targetIds; // x9
  System_Int32_array *v23; // x22
  int v24; // w8
  System_Func_int__bool__o **v25; // x23
  System_Func_int__bool__o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4353EF8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__);
    sub_B70694(&BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
    byte_4353EF8 = 1;
  }
  v9 = sub_B70764(BuffConvertEntity___c__DisplayClass13_0_TypeInfo);
  BuffConvertEntity___c__DisplayClass13_0___ctor((BuffConvertEntity___c__DisplayClass13_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  v20 = -1;
  *convertBuffIndex = -1;
  convertType = this->fields.convertType;
  if ( convertType != 2 )
  {
    if ( convertType == 1 )
    {
      v20 = System_Array__IndexOf_int_(
              this->fields.targetIds,
              buffId,
              (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___);
      *convertBuffIndex = v20;
    }
    return v20 >= 0;
  }
  BuffEntity = (System_Int32_array **)BuffConvertEntity__GetBuffEntity(v18, buffId, v19);
  if ( !BuffEntity
    || (BuffEntity = (System_Int32_array **)CommonFunction__JoinIndiv(BuffEntity[6], addIndividuality, 0LL),
        *(_DWORD *)(v9 + 24) = 0,
        (targetIds = this->fields.targetIds) == 0LL) )
  {
LABEL_15:
    sub_B7076C(BuffEntity, v11);
  }
  v23 = (System_Int32_array *)BuffEntity;
  v24 = 0;
  v25 = (System_Func_int__bool__o **)(v9 + 32);
  while ( 1 )
  {
    if ( v24 >= (signed int)targetIds->max_length )
    {
      v20 = *convertBuffIndex;
      return v20 >= 0;
    }
    v26 = *v25;
    if ( !*v25 )
    {
      v26 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)v9,
        Method_BuffConvertEntity___c__DisplayClass13_0__TryGetConvertBuffIndex_b__0__,
        (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
      *(_QWORD *)(v9 + 32) = v26;
      sub_B70630((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    }
    BuffEntity = (System_Int32_array **)BasicHelper__Any_int__29214704(
                                          v23,
                                          (System_Func_T__bool__o *)v26,
                                          (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
    v20 = *(_DWORD *)(v9 + 24);
    if ( ((unsigned __int8)BuffEntity & 1) != 0 )
      break;
    v24 = v20 + 1;
    *(_DWORD *)(v9 + 24) = v24;
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_15;
  }
  *convertBuffIndex = v20;
  return v20 >= 0;
}


void __fastcall BuffConvertEntity___c__DisplayClass13_0___ctor(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BuffConvertEntity___c__DisplayClass13_0___TryGetConvertBuffIndex_b__0(
        BuffConvertEntity___c__DisplayClass13_0_o *this,
        int32_t sf,
        const MethodInfo *method)
{
  struct BuffConvertEntity_o *_4__this; // x8
  struct System_Int32_array *targetIds; // x8
  __int64 i; // x9
  __int64 v7; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (targetIds = _4__this->fields.targetIds) == 0LL )
    sub_B7076C(this, sf);
  i = this->fields.i;
  if ( (unsigned int)i >= targetIds->max_length )
  {
    v7 = sub_B70798(this);
    sub_B70738(v7, 0LL);
  }
  return targetIds->m_Items[i + 1] == sf;
}