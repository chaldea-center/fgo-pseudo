void PropertyReference___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4D35235 & 1) == 0 )
  {
    sub_1C93AD4(&PropertyReference_TypeInfo);
    sub_1C93AD4(&StringLiteral_10855/*"PropertyBinding"*/);
    byte_4D35235 = 1;
  }
  if ( !StringLiteral_10855/*"PropertyBinding"*/ )
    sub_1C93D2C(0, v1);
  PropertyReference_TypeInfo->static_fields->s_Hash = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)StringLiteral_10855/*"PropertyBinding"*/
                                                                                                + 344LL))(
                                                        StringLiteral_10855/*"PropertyBinding"*/,
                                                        *(_QWORD *)(*(_QWORD *)StringLiteral_10855/*"PropertyBinding"*/ + 352LL));
}


void PropertyReference___ctor(PropertyReference_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PropertyReference___ctor_50094632(
        PropertyReference_o *this,
        UnityEngine_Component_o *target,
        System_String_o *fieldName,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mTarget = target;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)target, v7, v8, v9, v10, v11, v12);
  this->fields.mName = fieldName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mName, (int32_t)fieldName, v13, v14, v15, v16, v17, v18);
}


bool PropertyReference__Cache(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Reflection_PropertyInfo_o **p_mProperty; // x0
  int32_t v18; // w1
  Il2CppObject *Type; // x0
  System_Type_o *v20; // x20
  struct System_Reflection_FieldInfo_o *Field; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Reflection_PropertyInfo_o *Property; // x0

  if ( (byte_4D35230 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35230 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTarget, 0, 0) && !System_String__IsNullOrEmpty(this->fields.mName, 0) )
  {
    Type = (Il2CppObject *)this->fields.mTarget;
    if ( !Type || (Type = (Il2CppObject *)System_Object__GetType(Type, 0)) == 0 )
      sub_1C93D2C(Type, v10);
    v20 = (System_Type_o *)Type;
    Field = System_Type__GetField((System_Type_o *)Type, this->fields.mName, 0);
    this->fields.mField = Field;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mField, (int32_t)Field, v22, v23, v24, v25, v26, v27);
    Property = System_Type__GetProperty(v20, this->fields.mName, 0);
    v18 = (int)Property;
    this->fields.mProperty = Property;
    p_mProperty = &this->fields.mProperty;
  }
  else
  {
    this->fields.mField = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mField, 0, v4, v5, v6, v7, v8, v9);
    this->fields.mProperty = 0;
    p_mProperty = &this->fields.mProperty;
    v18 = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_mProperty, v18, v11, v12, v13, v14, v15, v16);
  return System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0)
      || System_Reflection_PropertyInfo__op_Inequality(this->fields.mProperty, 0, 0);
}


void PropertyReference__Clear(PropertyReference_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.mTarget = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mName = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mName, 0, v9, v10, v11, v12, v13, v14);
}


bool PropertyReference__Convert(PropertyReference_o *this, Il2CppObject **value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x21
  const MethodInfo *v6; // x1
  System_Type_o *PropertyType; // x0
  __int64 v9; // x1
  System_Type_o *v10; // x20
  const MethodInfo *v11; // x3
  System_Type_o *Type; // x21

  if ( (byte_4D35231 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PropertyReference_TypeInfo);
    byte_4D35231 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C93D2C(0, v9);
    Type = PropertyType;
    if ( !System_Type__get_IsClass(PropertyType, 0) )
      return 0;
  }
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  return PropertyReference__Convert_50096064(value, Type, v10, v11);
}


bool PropertyReference__Convert_50096064(
        Il2CppObject **value,
        System_Type_o *from,
        System_Type_o *to,
        const MethodInfo *method)
{
  Il2CppObject ***v6; // x19
  Il2CppType *v7; // x22
  System_Type_o *TypeFromHandle; // x0
  bool v9; // w0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject **v16; // x8
  Il2CppObject **v17; // x1
  Il2CppType *v18; // x22
  System_Type_o *v19; // x0
  Il2CppType *v20; // x21
  System_Type_o *v21; // x0
  int v22; // w8
  void *v23; // x0
  Il2CppType *v25; // x22
  System_Type_o *v26; // x0
  Il2CppType *v27; // x21
  System_Type_o *v28; // x0
  Il2CppType *v29; // x21
  System_Type_o *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  float v33; // s9
  double v34; // d8
  double v35; // d0
  double v36; // d0
  double v37; // d1
  double v38; // d1
  __int64 v39; // x0
  System_Type_o *v40; // x0
  System_Type_o *v41; // x1
  const MethodInfo *v42; // x2
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF
  double iptr; // [xsp+28h] [xbp-38h] BYREF

  v6 = (Il2CppObject ***)value;
  if ( (byte_4D35234 & 1) == 0 )
  {
    sub_1C93AD4(&int_var);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&float_var);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&string_var);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    value = (Il2CppObject **)sub_1C93AD4(&StringLiteral_22605/*"null"*/);
    byte_4D35234 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !to )
    goto LABEL_59;
  if ( (((__int64 (__fastcall *)(System_Type_o *, System_Type_o *, const MethodInfo *, const MethodInfo *))to->klass->vtable._22_IsAssignableFrom.methodPtr)(
          to,
          from,
          to->klass->vtable._22_IsAssignableFrom.method,
          method)
      & 1) != 0 )
    return 1;
  v7 = string_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v7, 0);
  v9 = System_Type__op_Equality(to, TypeFromHandle, 0);
  v16 = *v6;
  if ( v9 )
  {
    if ( v16 )
      v17 = (Il2CppObject **)((Il2CppObject **(__fastcall *)(Il2CppObject **__return_ptr, Il2CppObject **, Il2CppClass *))(*v16)[22].monitor)(
                               v16,
                               *v6,
                               (*v16)[23].klass);
    else
      v17 = (Il2CppObject **)StringLiteral_22605/*"null"*/;
    *v6 = v17;
    goto LABEL_23;
  }
  if ( !v16 )
    return 0;
  v18 = int_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v18, 0);
  if ( !System_Type__op_Equality(to, v19, 0) )
  {
    v25 = float_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v26 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v25, 0);
    if ( System_Type__op_Equality(to, v26, 0) )
    {
      v27 = string_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v28 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v27, 0);
      if ( System_Type__op_Equality(from, v28, 0) )
      {
        value = *v6;
        if ( *v6 && *value != (Il2CppObject *)string_TypeInfo )
          goto LABEL_60;
        if ( System_Single__TryParse((System_String_o *)value, (float *)result, 0) )
        {
          LODWORD(iptr) = result[0];
          v23 = float_TypeInfo;
LABEL_58:
          v39 = j_il2cpp_value_box_0(v23, &iptr);
          LODWORD(v17) = v39;
          *v6 = (Il2CppObject **)v39;
LABEL_23:
          sub_1C93A78((GrandQuestFolderBoardItem_o *)v6, (int32_t)v17, v10, v11, v12, v13, v14, v15);
          return 1;
        }
      }
    }
    return 0;
  }
  v20 = string_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v20, 0);
  if ( !System_Type__op_Equality(from, v21, 0) )
  {
    v29 = float_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v30 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v29, 0);
    if ( System_Type__op_Equality(from, v30, 0) )
    {
      value = *v6;
      if ( *v6 )
      {
        if ( (*value)[4].klass != float_TypeInfo->_1.element_class )
          goto LABEL_60;
        v33 = *(float *)j_il2cpp_object_unbox_0(value, float_TypeInfo, v31, v32);
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v34 = v33;
        v35 = modf(v33, &iptr);
        if ( v33 >= 0.0 )
        {
          if ( v35 == 0.5 )
          {
            v36 = iptr;
            v37 = 1.0;
LABEL_50:
            v38 = v36 + v37;
            if ( ((__int64)v36 & 1) != 0 )
              v36 = v38;
            goto LABEL_55;
          }
          v36 = floor(v34 + 0.5);
        }
        else
        {
          if ( v35 == -0.5 )
          {
            v36 = iptr;
            v37 = -1.0;
            goto LABEL_50;
          }
          v36 = ceil(v34 + -0.5);
        }
LABEL_55:
        v22 = (int)v36;
        v23 = int_TypeInfo;
        if ( v36 == INFINITY )
          v22 = 0x80000000;
        goto LABEL_57;
      }
LABEL_59:
      sub_1C93D2C(value, from);
    }
    return 0;
  }
  value = *v6;
  if ( !*v6 || *value == (Il2CppObject *)string_TypeInfo )
  {
    if ( System_Int32__TryParse((System_String_o *)value, &result[1], 0) )
    {
      v22 = result[1];
      v23 = int_TypeInfo;
LABEL_57:
      LODWORD(iptr) = v22;
      goto LABEL_58;
    }
    return 0;
  }
LABEL_60:
  sub_1C940C8(value);
  return PropertyReference__Convert_50097124(v40, v41, v42);
}


bool PropertyReference__Convert_50097124(System_Type_o *from, System_Type_o *to, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D35232 & 1) == 0 )
  {
    sub_1C93AD4(&PropertyReference_TypeInfo);
    byte_4D35232 = 1;
  }
  value = 0;
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  return PropertyReference__Convert_50096064(&value, from, to, v3);
}


bool PropertyReference__Convert_50097240(Il2CppObject *value, System_Type_o *to, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Type_o *Type; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-28h] BYREF

  valuea = value;
  if ( (byte_4D35233 & 1) == 0 )
  {
    sub_1C93AD4(&PropertyReference_TypeInfo);
    byte_4D35233 = 1;
  }
  if ( value )
  {
    Type = System_Object__GetType(value, 0);
    if ( !PropertyReference_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  }
  else
  {
    valuea = 0;
    Type = to;
    if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
      Type = to;
    }
  }
  return PropertyReference__Convert_50096064(&valuea, Type, to, v3);
}


bool PropertyReference__Equals(PropertyReference_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *mTarget; // x21
  Il2CppClass *klass; // x22

  if ( (byte_4D3522B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PropertyReference_TypeInfo);
    byte_4D3522B = 1;
  }
  if ( obj )
  {
    naturalAligment = PropertyReference_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (PropertyReference_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PropertyReference_TypeInfo )
    {
      mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
      klass = obj[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(mTarget, (UnityEngine_Object_o *)klass, 0) )
        return System_String__Equals_64461772(this->fields.mName, (System_String_o *)obj[1].monitor, 0);
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
        return (*(Il2CppObject *(__fastcall **)(void *, struct UnityEngine_Component_o *, _QWORD, _QWORD))(*(_QWORD *)mProperty + 712LL))(
                 mProperty,
                 this->fields.mTarget,
                 0,
                 *(_QWORD *)(*(_QWORD *)mProperty + 720LL));
LABEL_14:
      sub_1C93D2C(mProperty, v5);
    }
    return 0;
  }
  if ( !System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
    return 0;
  mProperty = this->fields.mField;
  if ( !mProperty )
    goto LABEL_14;
  return (*(Il2CppObject *(__fastcall **)(void *, struct UnityEngine_Component_o *, _QWORD))(*(_QWORD *)mProperty + 712LL))(
           mProperty,
           this->fields.mTarget,
           *(_QWORD *)(*(_QWORD *)mProperty + 720LL));
}


int32_t PropertyReference__GetHashCode(PropertyReference_o *this, const MethodInfo *method)
{
  PropertyReference_c *v2; // x0

  if ( (byte_4D3522C & 1) == 0 )
  {
    sub_1C93AD4(&PropertyReference_TypeInfo);
    byte_4D3522C = 1;
  }
  v2 = PropertyReference_TypeInfo;
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
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
  System_Type_o *(*v7)(void); // x2
  Il2CppType *v9; // x19

  if ( (byte_4D3522A & 1) == 0 )
  {
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&void_var);
    byte_4D3522A = 1;
  }
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
      v7 = *(System_Type_o *(**)(void))(*(_QWORD *)mProperty + 568LL);
      return v7();
    }
    goto LABEL_17;
  }
  if ( System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
  {
    mProperty = this->fields.mField;
    if ( mProperty )
    {
      v7 = *(System_Type_o *(**)(void))(*(_QWORD *)mProperty + 584LL);
      return v7();
    }
LABEL_17:
    sub_1C93D2C(mProperty, v5);
  }
  v9 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  return System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v9, 0);
}


void PropertyReference__Reset(PropertyReference_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.mField = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mField, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mProperty = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mProperty, 0, v9, v10, v11, v12, v13, v14);
}


void PropertyReference__Set(
        PropertyReference_o *this,
        UnityEngine_Component_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.mTarget = target;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)target,
    (int32_t)methodName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mName = methodName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mName, (int32_t)methodName, v10, v11, v12, v13, v14, v15);
}


bool PropertyReference__Set_50093136(PropertyReference_o *this, Il2CppObject *value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  System_Reflection_FieldInfo_o *v9; // x0
  __int64 v10; // x1
  struct System_Reflection_PropertyInfo_o *mProperty; // x0
  __int64 v12; // x1
  struct System_Reflection_PropertyInfo_o *v13; // x0
  System_Type_o *Type; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  System_Reflection_FieldInfo_o *mField; // x0
  System_Type_o *PropertyType; // x0
  System_String_o *v21; // x19
  System_String_o *v22; // x3
  Il2CppObject *v23; // x19
  Il2CppObject *valuea; // [xsp+8h] [xbp-28h] BYREF

  valuea = value;
  if ( (byte_4D3522F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&StringLiteral_304/*" to "*/);
    sub_1C93AD4(&StringLiteral_15002/*"Unable to convert "*/);
    byte_4D3522F = 1;
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
          sub_1C93D2C(0, v10);
        System_Reflection_FieldInfo__SetValue(mField, (Il2CppObject *)this->fields.mTarget, 0, 0);
        return 1;
      }
      mProperty = this->fields.mProperty;
      if ( !mProperty )
        sub_1C93D2C(0, v10);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_PropertyInfo_o *, const MethodInfo *))mProperty->klass->vtable._19_unknown.methodPtr)(
              mProperty,
              mProperty->klass->vtable._19_unknown.method)
          & 1) != 0 )
      {
        v13 = this->fields.mProperty;
        if ( !v13 )
          sub_1C93D2C(0, v12);
        ((void (__fastcall *)(struct System_Reflection_PropertyInfo_o *, struct UnityEngine_Component_o *, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._27_SetValue.methodPtr)(
          v13,
          this->fields.mTarget,
          0,
          0,
          v13->klass->vtable._27_SetValue.method);
        return 1;
      }
    }
    if ( PropertyReference__Convert(this, &valuea, v7) )
    {
      if ( System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
      {
        v9 = this->fields.mField;
        if ( v9 )
        {
          System_Reflection_FieldInfo__SetValue(v9, (Il2CppObject *)this->fields.mTarget, valuea, 0);
          return 1;
        }
        goto LABEL_41;
      }
      v9 = (System_Reflection_FieldInfo_o *)this->fields.mProperty;
      if ( !v9 )
        goto LABEL_41;
      if ( (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, const MethodInfo *))v9->klass->vtable._19_get_IsLiteral.methodPtr)(
              v9,
              v9->klass->vtable._19_get_IsLiteral.method)
          & 1) != 0 )
      {
        v9 = (System_Reflection_FieldInfo_o *)this->fields.mProperty;
        if ( v9 )
        {
          ((void (__fastcall *)(System_Reflection_FieldInfo_o *, struct UnityEngine_Component_o *, Il2CppObject *, _QWORD, const MethodInfo *))v9->klass->vtable._27_unknown.methodPtr)(
            v9,
            this->fields.mTarget,
            valuea,
            0,
            v9->klass->vtable._27_unknown.method);
          return 1;
        }
LABEL_41:
        sub_1C93D2C(v9, v8);
      }
    }
    else
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        v9 = (System_Reflection_FieldInfo_o *)valuea;
        if ( !valuea )
          goto LABEL_41;
        Type = System_Object__GetType(valuea, 0);
        v16 = (System_String_o *)StringLiteral_15002/*"Unable to convert "*/;
        if ( Type )
          v17 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                     Type,
                                     Type->klass->vtable._3_ToString.method);
        else
          v17 = 0;
        PropertyType = PropertyReference__GetPropertyType(this, v15);
        v21 = (System_String_o *)StringLiteral_304/*" to "*/;
        if ( PropertyType )
          v22 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))PropertyType->klass->vtable._3_ToString.methodPtr)(
                                     PropertyType,
                                     PropertyType->klass->vtable._3_ToString.method);
        else
          v22 = 0;
        v23 = (Il2CppObject *)System_String__Concat_64465992(v16, v17, v21, v22, 0);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v23, 0);
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

  if ( (byte_4D3522D & 1) == 0 )
  {
    sub_1C93AD4(&PropertyReference_TypeInfo);
    byte_4D3522D = 1;
  }
  mTarget = this->fields.mTarget;
  mName = this->fields.mName;
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  return PropertyReference__ToString_50095496(mTarget, mName, v2);
}


System_String_o *PropertyReference__ToString_50095496(
        UnityEngine_Component_o *comp,
        System_String_o *property,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  int32_t IndexOf; // w0

  if ( (byte_4D3522E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1005/*".[property]"*/);
    sub_1C93AD4(&StringLiteral_982/*"."*/);
    byte_4D3522E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Type = (System_Type_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)comp, 0, 0);
  if ( ((unsigned __int8)Type & 1) == 0 )
    return 0;
  if ( !comp
    || (Type = System_Object__GetType((Il2CppObject *)comp, 0)) == 0
    || (Type = (System_Type_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                  Type,
                                  Type->klass->vtable._3_ToString.method)) == 0 )
  {
    sub_1C93D2C(Type, v6);
  }
  v7 = (System_String_o *)Type;
  IndexOf = System_String__LastIndexOf((System_String_o *)Type, 0x2Eu, 0);
  if ( IndexOf >= 1 )
    v7 = System_String__Substring(v7, IndexOf + 1, 0);
  if ( System_String__IsNullOrEmpty(property, 0) )
    return System_String__Concat_64425724(v7, (System_String_o *)StringLiteral_1005/*".[property]"*/, 0);
  else
    return System_String__Concat_64463988(v7, (System_String_o *)StringLiteral_982/*"."*/, property, 0);
}


bool PropertyReference__get_isEnabled(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  struct UnityEngine_Component_o *v5; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D35229 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35229 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) )
    return 0;
  v5 = this->fields.mTarget;
  if ( v5
    && (naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment,
        v5->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_MonoBehaviour_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo )
      v7 = (UnityEngine_Object_o *)this->fields.mTarget;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( v8 )
    return 1;
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0);
}


bool PropertyReference__get_isValid(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20

  if ( (byte_4D35228 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35228 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  this->fields.mName = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mName, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.mProperty = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mProperty, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mField = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mField, 0, v15, v16, v17, v18, v19, v20);
}


void PropertyReference__set_target(PropertyReference_o *this, UnityEngine_Component_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  this->fields.mTarget = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.mProperty = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mProperty, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mField = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mField, 0, v15, v16, v17, v18, v19, v20);
}