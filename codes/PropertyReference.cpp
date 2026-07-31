void PropertyReference___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_593CE92 & 1) == 0 )
  {
    sub_21FFC50(&PropertyReference_TypeInfo);
    sub_21FFC50(&StringLiteral_11229/*"PropertyBinding"*/);
    byte_593CE92 = 1;
  }
  if ( !StringLiteral_11229/*"PropertyBinding"*/ )
    sub_21FFECC(0, v1);
  PropertyReference_TypeInfo->static_fields->s_Hash = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)StringLiteral_11229/*"PropertyBinding"*/
                                                                                                + 344LL))(
                                                        StringLiteral_11229/*"PropertyBinding"*/,
                                                        *(_QWORD *)(*(_QWORD *)StringLiteral_11229/*"PropertyBinding"*/ + 352LL));
}


void PropertyReference___ctor(PropertyReference_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PropertyReference___ctor_56229448(
        PropertyReference_o *this,
        UnityEngine_Component_o *target,
        System_String_o *fieldName,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mTarget = target;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)target, v7, v8, v9, v10, v11, v12);
  this->fields.mName = fieldName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mName, (int32_t)fieldName, v13, v14, v15, v16, v17, v18);
}


bool PropertyReference__Cache(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct System_Reflection_PropertyInfo_o **p_mProperty; // x0
  Il2CppObject *Type; // x0
  System_Type_o *v20; // x20
  struct System_Reflection_FieldInfo_o *Field; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Reflection_PropertyInfo_o *Property; // x0

  if ( (byte_593CE8D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE8D = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTarget, 0, 0) && !System_String__IsNullOrEmpty(this->fields.mName, 0) )
  {
    Type = (Il2CppObject *)this->fields.mTarget;
    if ( !Type || (Type = (Il2CppObject *)System_Object__GetType(Type, 0)) == 0 )
      sub_21FFECC(Type, v10);
    v20 = (System_Type_o *)Type;
    Field = System_Type__GetField((System_Type_o *)Type, this->fields.mName, 0);
    this->fields.mField = Field;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mField, (int32_t)Field, v22, v23, v24, v25, v26, v27);
    Property = System_Type__GetProperty(v20, this->fields.mName, 0);
    v17 = (int)Property;
    this->fields.mProperty = Property;
    p_mProperty = &this->fields.mProperty;
  }
  else
  {
    this->fields.mField = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mField, 0, v4, v5, v6, v7, v8, v9);
    v17 = 0;
    this->fields.mProperty = 0;
    p_mProperty = &this->fields.mProperty;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mProperty, v17, v11, v12, v13, v14, v15, v16);
  return System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0)
      || System_Reflection_PropertyInfo__op_Inequality(this->fields.mProperty, 0, 0);
}


void PropertyReference__Clear(PropertyReference_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.mTarget = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mName = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mName, 0, v9, v10, v11, v12, v13, v14);
}


bool PropertyReference__Convert(PropertyReference_o *this, Il2CppObject **value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x21
  const MethodInfo *v6; // x1
  System_Type_o *PropertyType; // x0
  __int64 v9; // x1
  System_Type_o *v10; // x20
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Type_o *Type; // x21

  if ( (byte_593CE8E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PropertyReference_TypeInfo);
    byte_593CE8E = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) )
    return 0;
  PropertyType = PropertyReference__GetPropertyType(this, v6);
  v10 = PropertyType;
  if ( *value )
  {
    Type = System_Object__GetType(*value, 0);
  }
  else
  {
    if ( !PropertyType )
      sub_21FFECC(0, v9);
    Type = PropertyType;
    if ( !System_Type__get_IsClass(PropertyType, 0) )
      return 0;
  }
  if ( !*(&PropertyReference_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo, v11);
  return PropertyReference__Convert_56230880(value, Type, v10, v12);
}


bool PropertyReference__Convert_56230880(
        Il2CppObject **value,
        System_Type_o *from,
        System_Type_o *to,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x23
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  bool v18; // w8
  MissionNaviTransitionBoardItem_c *klass; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  System_RuntimeTypeHandle_o v22; // x0
  System_Type_o *v23; // x0
  __int64 v24; // x1
  bool v25; // w8
  int v26; // w9
  __int64 v27; // x21
  System_RuntimeTypeHandle_o v28; // x0
  System_Type_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x23
  System_RuntimeTypeHandle_o v36; // x0
  System_Type_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x21
  System_RuntimeTypeHandle_o v40; // x0
  System_Type_o *v41; // x0
  __int64 v42; // x21
  System_RuntimeTypeHandle_o v43; // x0
  System_Type_o *v44; // x0
  float *v45; // x0
  __int64 v46; // x0
  System_Type_o *v47; // x0
  System_Type_o *v48; // x1
  const MethodInfo *v49; // x2
  int32_t v51; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = (MissionNaviTransitionBoardItem_o *)value;
  if ( (byte_593CE91 & 1) == 0 )
  {
    value = (Il2CppObject **)sub_21FFC50(&StringLiteral_23418/*"null"*/);
    byte_593CE91 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !to )
    sub_21FFECC(value, from);
  if ( (((__int64 (__fastcall *)(System_Type_o *, System_Type_o *, const MethodInfo *, const MethodInfo *))to->klass->vtable._22_IsAssignableFrom.methodPtr)(
          to,
          from,
          to->klass->vtable._22_IsAssignableFrom.method,
          method)
      & 1) != 0 )
    goto LABEL_24;
  v8 = qword_594C0B8;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v7);
  v9.fields.value = v8 + 32;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
  v18 = System_Type__op_Equality(to, TypeFromHandle, 0);
  klass = v6->klass;
  if ( v18 )
  {
    if ( klass )
      v20 = (*((__int64 (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD))klass->_1.image + 45))(
              klass,
              *((_QWORD *)klass->_1.image + 46));
    else
      v20 = StringLiteral_23418/*"null"*/;
    v6->klass = (MissionNaviTransitionBoardItem_c *)v20;
    goto LABEL_23;
  }
  if ( klass )
  {
    v21 = qword_594C070;
    if ( !*(_DWORD *)(qword_594C108 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C108, v11);
    v22.fields.value = v21 + 32;
    v23 = System_Type__GetTypeFromHandle(v22, 0);
    v25 = System_Type__op_Equality(to, v23, 0);
    v26 = *(_DWORD *)(qword_594C108 + 228);
    if ( v25 )
    {
      v27 = qword_594C0B8;
      if ( !v26 )
        j_il2cpp_runtime_class_init_0(qword_594C108, v24);
      v28.fields.value = v27 + 32;
      v29 = System_Type__GetTypeFromHandle(v28, 0);
      if ( System_Type__op_Equality(from, v29, 0) )
      {
        v32 = (System_String_o *)v6->klass;
        if ( !v6->klass || (v33 = qword_594C0B8, v32->klass == (System_String_c *)qword_594C0B8) )
        {
          if ( System_Int32__TryParse(v32, &result[1], 0) )
          {
            v34 = qword_594C070;
            v51 = result[1];
LABEL_40:
            v46 = j_il2cpp_value_box_0(v34, &v51);
            LODWORD(v20) = v46;
            v6->klass = (MissionNaviTransitionBoardItem_c *)v46;
LABEL_23:
            sub_21FFBF4(v6, v20, v12, v13, v14, v15, v16, v17);
LABEL_24:
            LOBYTE(klass) = 1;
            return (char)klass;
          }
          goto LABEL_41;
        }
LABEL_43:
        sub_220024C(v32, v33, v31);
        LOBYTE(klass) = PropertyReference__Convert_56231564(v47, v48, v49);
        return (char)klass;
      }
      v42 = qword_594C0A0;
      if ( !*(_DWORD *)(qword_594C108 + 228) )
        j_il2cpp_runtime_class_init_0(qword_594C108, v30);
      v43.fields.value = v42 + 32;
      v44 = System_Type__GetTypeFromHandle(v43, 0);
      if ( System_Type__op_Equality(from, v44, 0) )
      {
        v45 = (float *)sub_1FEB248(v6->klass, qword_594C0A0);
        v51 = sub_357AA88(0, *v45);
        v34 = qword_594C070;
        goto LABEL_40;
      }
    }
    else
    {
      v35 = qword_594C0A0;
      if ( !v26 )
        j_il2cpp_runtime_class_init_0(qword_594C108, v24);
      v36.fields.value = v35 + 32;
      v37 = System_Type__GetTypeFromHandle(v36, 0);
      if ( System_Type__op_Equality(to, v37, 0) )
      {
        v39 = qword_594C0B8;
        if ( !*(_DWORD *)(qword_594C108 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C108, v38);
        v40.fields.value = v39 + 32;
        v41 = System_Type__GetTypeFromHandle(v40, 0);
        if ( System_Type__op_Equality(from, v41, 0) )
        {
          v32 = (System_String_o *)v6->klass;
          if ( !v6->klass || (v33 = qword_594C0B8, v32->klass == (System_String_c *)qword_594C0B8) )
          {
            if ( System_Single__TryParse(v32, (float *)result, 0) )
            {
              v34 = qword_594C0A0;
              v51 = result[0];
              goto LABEL_40;
            }
            goto LABEL_41;
          }
          goto LABEL_43;
        }
      }
    }
LABEL_41:
    LOBYTE(klass) = 0;
  }
  return (char)klass;
}


bool PropertyReference__Convert_56231564(System_Type_o *from, System_Type_o *to, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593CE8F & 1) == 0 )
  {
    sub_21FFC50(&PropertyReference_TypeInfo);
    byte_593CE8F = 1;
  }
  value = 0;
  if ( !*(&PropertyReference_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo, to);
  return PropertyReference__Convert_56230880(&value, from, to, v3);
}


bool PropertyReference__Convert_56231680(Il2CppObject *value, System_Type_o *to, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Type_o *Type; // x0
  PropertyReference_c *v7; // x8
  System_Type_o *v8; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-28h] BYREF

  valuea = value;
  if ( (byte_593CE90 & 1) == 0 )
  {
    sub_21FFC50(&PropertyReference_TypeInfo);
    byte_593CE90 = 1;
  }
  if ( value )
  {
    Type = System_Object__GetType(value, 0);
    v7 = PropertyReference_TypeInfo;
    v8 = Type;
    if ( !*(&PropertyReference_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_8;
  }
  else
  {
    v7 = PropertyReference_TypeInfo;
    v8 = to;
    valuea = 0;
    if ( !*(&PropertyReference_TypeInfo->_2.cctor_finished + 1) )
    {
      v8 = to;
LABEL_8:
      j_il2cpp_runtime_class_init_0(v7, to);
    }
  }
  return PropertyReference__Convert_56230880(&valuea, v8, to, v3);
}


bool PropertyReference__Equals(PropertyReference_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *mTarget; // x21
  Il2CppClass *klass; // x22

  if ( (byte_593CE88 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PropertyReference_TypeInfo);
    byte_593CE88 = 1;
  }
  if ( obj )
  {
    naturalAligment = PropertyReference_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (PropertyReference_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PropertyReference_TypeInfo )
    {
      mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
      klass = obj[1].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
      if ( UnityEngine_Object__op_Equality(mTarget, (UnityEngine_Object_o *)klass, 0) )
        return System_String__Equals_75473952(this->fields.mName, (System_String_o *)obj[1].monitor, 0);
    }
    return 0;
  }
  else
  {
    return !PropertyReference__get_isValid(this, (const MethodInfo *)obj);
  }
}


Il2CppObject *PropertyReference__Get(PropertyReference_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  void *mProperty; // x0

  if ( System_Reflection_PropertyInfo__op_Equality(this->fields.mProperty, 0, 0)
    && System_Reflection_FieldInfo__op_Equality(this->fields.mField, 0, 0)
    && PropertyReference__get_isValid(this, v3) )
  {
    PropertyReference__Cache(this, v4);
  }
  if ( System_Reflection_PropertyInfo__op_Inequality(this->fields.mProperty, 0, 0) )
  {
    mProperty = this->fields.mProperty;
    if ( !mProperty )
      goto LABEL_14;
    if ( ((*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mProperty + 600LL))(
            mProperty,
            *(_QWORD *)(*(_QWORD *)mProperty + 608LL))
        & 1) != 0 )
    {
      mProperty = this->fields.mProperty;
      if ( mProperty )
        return (Il2CppObject *)(*(__int64 (__fastcall **)(void *, struct UnityEngine_Component_o *, _QWORD, _QWORD))(*(_QWORD *)mProperty + 712LL))(
                                 mProperty,
                                 this->fields.mTarget,
                                 0,
                                 *(_QWORD *)(*(_QWORD *)mProperty + 720LL));
LABEL_14:
      sub_21FFECC(mProperty, v5);
    }
    return 0;
  }
  if ( !System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
    return 0;
  mProperty = this->fields.mField;
  if ( !mProperty )
    goto LABEL_14;
  return (Il2CppObject *)(*(__int64 (__fastcall **)(void *, struct UnityEngine_Component_o *, _QWORD))(*(_QWORD *)mProperty + 712LL))(
                           mProperty,
                           this->fields.mTarget,
                           *(_QWORD *)(*(_QWORD *)mProperty + 720LL));
}


int32_t PropertyReference__GetHashCode(PropertyReference_o *this, const MethodInfo *method)
{
  PropertyReference_c *v2; // x0

  if ( (byte_593CE89 & 1) == 0 )
  {
    sub_21FFC50(&PropertyReference_TypeInfo);
    byte_593CE89 = 1;
  }
  v2 = PropertyReference_TypeInfo;
  if ( !*(&PropertyReference_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo, method);
    v2 = PropertyReference_TypeInfo;
  }
  return v2->static_fields->s_Hash;
}


System_Type_o *PropertyReference__GetPropertyType(PropertyReference_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  void *mProperty; // x0
  __int64 (*v7)(void); // x2
  __int64 v9; // x19
  System_RuntimeTypeHandle_o v10; // x0

  if ( System_Reflection_PropertyInfo__op_Equality(this->fields.mProperty, 0, 0)
    && System_Reflection_FieldInfo__op_Equality(this->fields.mField, 0, 0)
    && PropertyReference__get_isValid(this, v3) )
  {
    PropertyReference__Cache(this, v4);
  }
  if ( System_Reflection_PropertyInfo__op_Inequality(this->fields.mProperty, 0, 0) )
  {
    mProperty = this->fields.mProperty;
    if ( mProperty )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)mProperty + 568LL);
      return (System_Type_o *)v7();
    }
    goto LABEL_15;
  }
  if ( System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
  {
    mProperty = this->fields.mField;
    if ( mProperty )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)mProperty + 584LL);
      return (System_Type_o *)v7();
    }
LABEL_15:
    sub_21FFECC(mProperty, v5);
  }
  v9 = qword_594C048;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v5);
  v10.fields.value = v9 + 32;
  return System_Type__GetTypeFromHandle(v10, 0);
}


void PropertyReference__Reset(PropertyReference_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.mField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mField, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mProperty = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mProperty, 0, v9, v10, v11, v12, v13, v14);
}


void PropertyReference__Set(
        PropertyReference_o *this,
        UnityEngine_Component_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.mTarget = target;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)target,
    methodName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mName = methodName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mName,
    (int32_t)methodName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


bool PropertyReference__Set_56228016(PropertyReference_o *this, Il2CppObject *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  __int64 v9; // x1
  System_Reflection_FieldInfo_o *v10; // x0
  __int64 v11; // x1
  struct System_Reflection_PropertyInfo_o *mProperty; // x0
  __int64 v13; // x1
  struct System_Reflection_PropertyInfo_o *v14; // x0
  System_Type_o *Type; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x20
  System_String_o *v18; // x21
  System_Reflection_FieldInfo_o *mField; // x0
  System_Type_o *PropertyType; // x0
  System_String_o *v22; // x19
  System_String_o *v23; // x3
  __int64 v24; // x1
  Il2CppObject *v25; // x19
  Il2CppObject *valuea; // [xsp+8h] [xbp-28h] BYREF

  valuea = value;
  if ( (byte_593CE8C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&StringLiteral_323/*" to "*/);
    sub_21FFC50(&StringLiteral_15469/*"Unable to convert "*/);
    byte_593CE8C = 1;
  }
  if ( System_Reflection_PropertyInfo__op_Equality(this->fields.mProperty, 0, 0)
    && System_Reflection_FieldInfo__op_Equality(this->fields.mField, 0, 0)
    && PropertyReference__get_isValid(this, v5) )
  {
    PropertyReference__Cache(this, v6);
  }
  if ( !System_Reflection_PropertyInfo__op_Equality(this->fields.mProperty, 0, 0)
    || !System_Reflection_FieldInfo__op_Equality(this->fields.mField, 0, 0) )
  {
    if ( !value )
    {
      if ( !System_Reflection_PropertyInfo__op_Inequality(this->fields.mProperty, 0, 0) )
      {
        mField = this->fields.mField;
        if ( !mField )
          sub_21FFECC(0, v11);
        System_Reflection_FieldInfo__SetValue(mField, (Il2CppObject *)this->fields.mTarget, 0, 0);
        return 1;
      }
      mProperty = this->fields.mProperty;
      if ( !mProperty )
        sub_21FFECC(0, v11);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_PropertyInfo_o *, const MethodInfo *))mProperty->klass->vtable._19_unknown.methodPtr)(
              mProperty,
              mProperty->klass->vtable._19_unknown.method)
          & 1) != 0 )
      {
        v14 = this->fields.mProperty;
        if ( !v14 )
          sub_21FFECC(0, v13);
        ((void (__fastcall *)(struct System_Reflection_PropertyInfo_o *, struct UnityEngine_Component_o *, _QWORD, _QWORD, const MethodInfo *))v14->klass->vtable._27_SetValue.methodPtr)(
          v14,
          this->fields.mTarget,
          0,
          0,
          v14->klass->vtable._27_SetValue.method);
        return 1;
      }
    }
    if ( PropertyReference__Convert(this, &valuea, v7) )
    {
      if ( System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
      {
        v10 = this->fields.mField;
        if ( v10 )
        {
          System_Reflection_FieldInfo__SetValue(v10, (Il2CppObject *)this->fields.mTarget, valuea, 0);
          return 1;
        }
        goto LABEL_41;
      }
      v10 = (System_Reflection_FieldInfo_o *)this->fields.mProperty;
      if ( !v10 )
        goto LABEL_41;
      if ( (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, const MethodInfo *))v10->klass->vtable._19_get_IsLiteral.methodPtr)(
              v10,
              v10->klass->vtable._19_get_IsLiteral.method)
          & 1) != 0 )
      {
        v10 = (System_Reflection_FieldInfo_o *)this->fields.mProperty;
        if ( v10 )
        {
          ((void (__fastcall *)(System_Reflection_FieldInfo_o *, struct UnityEngine_Component_o *, Il2CppObject *, _QWORD, const MethodInfo *))v10->klass->vtable._27_unknown.methodPtr)(
            v10,
            this->fields.mTarget,
            valuea,
            0,
            v10->klass->vtable._27_unknown.method);
          return 1;
        }
LABEL_41:
        sub_21FFECC(v10, v9);
      }
    }
    else
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v8);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        v10 = (System_Reflection_FieldInfo_o *)valuea;
        if ( !valuea )
          goto LABEL_41;
        Type = System_Object__GetType(valuea, 0);
        v17 = (System_String_o *)StringLiteral_15469/*"Unable to convert "*/;
        if ( Type )
          v18 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                     Type,
                                     Type->klass->vtable._3_ToString.method);
        else
          v18 = 0;
        PropertyType = PropertyReference__GetPropertyType(this, v16);
        v22 = (System_String_o *)StringLiteral_323/*" to "*/;
        if ( PropertyType )
          v23 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))PropertyType->klass->vtable._3_ToString.methodPtr)(
                                     PropertyType,
                                     PropertyType->klass->vtable._3_ToString.method);
        else
          v23 = 0;
        v25 = (Il2CppObject *)System_String__Concat_75483552(v17, v18, v22, v23, 0);
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v24);
        UnityEngine_Debug__LogError(v25, 0);
      }
    }
  }
  return 0;
}


System_String_o *PropertyReference__ToString(PropertyReference_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *mName; // x19
  UnityEngine_Component_o *mTarget; // x20

  if ( (byte_593CE8A & 1) == 0 )
  {
    sub_21FFC50(&PropertyReference_TypeInfo);
    byte_593CE8A = 1;
  }
  mTarget = this->fields.mTarget;
  mName = this->fields.mName;
  if ( !*(&PropertyReference_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo, method);
  return PropertyReference__ToString_56230312(mTarget, mName, v2);
}


System_String_o *PropertyReference__ToString_56230312(
        UnityEngine_Component_o *comp,
        System_String_o *property,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  int32_t IndexOf; // w0

  if ( (byte_593CE8B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1087/*".[property]"*/);
    sub_21FFC50(&StringLiteral_1063/*"."*/);
    byte_593CE8B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, property);
  Type = (System_Type_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)comp, 0, 0);
  if ( ((unsigned __int8)Type & 1) == 0 )
    return 0;
  if ( !comp
    || (Type = System_Object__GetType((Il2CppObject *)comp, 0)) == 0
    || (Type = (System_Type_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                  Type,
                                  Type->klass->vtable._3_ToString.method)) == 0 )
  {
    sub_21FFECC(Type, v6);
  }
  v7 = (System_String_o *)Type;
  IndexOf = System_String__LastIndexOf((System_String_o *)Type, 0x2Eu, 0);
  if ( IndexOf >= 1 )
    v7 = System_String__Substring(v7, IndexOf + 1, 0);
  if ( System_String__IsNullOrEmpty(property, 0) )
    return System_String__Concat_75438412(v7, (System_String_o *)StringLiteral_1087/*".[property]"*/, 0);
  else
    return System_String__Concat_75481624(v7, (System_String_o *)StringLiteral_1063/*"."*/, property, 0);
}


bool PropertyReference__get_isEnabled(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  __int64 v4; // x1
  struct UnityEngine_Component_o *v6; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_593CE87 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE87 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) )
    return 0;
  v6 = this->fields.mTarget;
  if ( v6
    && (naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment,
        v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_MonoBehaviour_c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo )
      v8 = (UnityEngine_Object_o *)this->fields.mTarget;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v9 = UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( v9 )
    return 1;
  if ( !v8 )
    sub_21FFECC(v9, v10);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v8, 0);
}


bool PropertyReference__get_isValid(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20

  if ( (byte_593CE86 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CE86 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(mTarget, 0, 0) && !System_String__IsNullOrEmpty(this->fields.mName, 0);
}


System_String_o *PropertyReference__get_name(PropertyReference_o *this, const MethodInfo *method)
{
  return this->fields.mName;
}


UnityEngine_Component_o *PropertyReference__get_target(PropertyReference_o *this, const MethodInfo *method)
{
  return this->fields.mTarget;
}


void PropertyReference__set_name(PropertyReference_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  this->fields.mName = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mName,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mProperty = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mProperty, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mField, 0, v15, v16, v17, v18, v19, v20);
}


void PropertyReference__set_target(PropertyReference_o *this, UnityEngine_Component_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  this->fields.mTarget = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mProperty = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mProperty, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mField, 0, v15, v16, v17, v18, v19, v20);
}