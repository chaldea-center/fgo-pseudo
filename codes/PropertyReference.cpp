void PropertyReference___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C5B52B & 1) == 0 )
  {
    sub_1C3E564(&PropertyReference_TypeInfo);
    sub_1C3E564(&StringLiteral_10780/*"PropertyBinding"*/);
    byte_4C5B52B = 1;
  }
  if ( !StringLiteral_10780/*"PropertyBinding"*/ )
    sub_1C3E7C0(0, v1);
  PropertyReference_TypeInfo->static_fields->s_Hash = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)StringLiteral_10780/*"PropertyBinding"*/
                                                                                                + 344LL))(
                                                        StringLiteral_10780/*"PropertyBinding"*/,
                                                        *(_QWORD *)(*(_QWORD *)StringLiteral_10780/*"PropertyBinding"*/ + 352LL));
}


void PropertyReference___ctor(PropertyReference_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PropertyReference___ctor_49441552(
        PropertyReference_o *this,
        UnityEngine_Component_o *target,
        System_String_o *fieldName,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mTarget = target;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)target, v7, v8);
  this->fields.mName = fieldName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mName, (int32_t)fieldName, v9, v10);
}


bool PropertyReference__Cache(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Reflection_PropertyInfo_o **p_mProperty; // x0
  int32_t v10; // w1
  Il2CppObject *Type; // x0
  System_Type_o *v12; // x20
  struct System_Reflection_FieldInfo_o *Field; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Reflection_PropertyInfo_o *Property; // x0

  if ( (byte_4C5B526 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B526 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTarget, 0, 0) && !System_String__IsNullOrEmpty(this->fields.mName, 0) )
  {
    Type = (Il2CppObject *)this->fields.mTarget;
    if ( !Type || (Type = (Il2CppObject *)System_Object__GetType(Type, 0)) == 0 )
      sub_1C3E7C0(Type, v6);
    v12 = (System_Type_o *)Type;
    Field = System_Type__GetField((System_Type_o *)Type, this->fields.mName, 0);
    this->fields.mField = Field;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mField, (int32_t)Field, v14, v15);
    Property = System_Type__GetProperty(v12, this->fields.mName, 0);
    v10 = (int)Property;
    this->fields.mProperty = Property;
    p_mProperty = &this->fields.mProperty;
  }
  else
  {
    this->fields.mField = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mField, 0, v4, v5);
    this->fields.mProperty = 0;
    p_mProperty = &this->fields.mProperty;
    v10 = 0;
  }
  sub_1C3E508((CGThumbnailListItem_o *)p_mProperty, v10, v7, v8);
  return System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0)
      || System_Reflection_PropertyInfo__op_Inequality(this->fields.mProperty, 0, 0);
}


void PropertyReference__Clear(PropertyReference_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.mTarget = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, 0, v2, v3);
  this->fields.mName = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mName, 0, v5, v6);
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

  if ( (byte_4C5B527 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&PropertyReference_TypeInfo);
    byte_4C5B527 = 1;
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
      sub_1C3E7C0(0, v9);
    Type = PropertyType;
    if ( !System_Type__get_IsClass(PropertyType, 0) )
      return 0;
  }
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  return PropertyReference__Convert_49442984(value, Type, v10, v11);
}


bool PropertyReference__Convert_49442984(
        Il2CppObject **value,
        System_Type_o *from,
        System_Type_o *to,
        const MethodInfo *method)
{
  Il2CppObject ***v6; // x19
  Il2CppType *v7; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  bool v10; // w0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject **v13; // x8
  Il2CppObject **v14; // x1
  Il2CppType *v15; // x22
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *v17; // x0
  Il2CppType *v18; // x21
  System_RuntimeTypeHandle_o v19; // x0
  System_Type_o *v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int v27; // w8
  void *v28; // x0
  Il2CppType *v30; // x22
  System_RuntimeTypeHandle_o v31; // x0
  System_Type_o *v32; // x0
  Il2CppType *v33; // x21
  System_RuntimeTypeHandle_o v34; // x0
  System_Type_o *v35; // x0
  Il2CppType *v36; // x21
  System_RuntimeTypeHandle_o v37; // x0
  System_Type_o *v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  float v41; // s9
  double v42; // d8
  double v43; // d0
  double v44; // d0
  double v45; // d1
  double v46; // d1
  __int64 v47; // x0
  System_Type_o *v48; // x0
  System_Type_o *v49; // x1
  const MethodInfo *v50; // x2
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF
  double iptr; // [xsp+28h] [xbp-38h] BYREF

  v6 = (Il2CppObject ***)value;
  if ( (byte_4C5B52A & 1) == 0 )
  {
    sub_1C3E564(&int_var);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&float_var);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&string_var);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    value = (Il2CppObject **)sub_1C3E564(&StringLiteral_22353/*"null"*/);
    byte_4C5B52A = 1;
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
  v8.fields.value = (intptr_t)v7;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  v10 = System_Type__op_Equality(to, TypeFromHandle, 0);
  v13 = *v6;
  if ( v10 )
  {
    if ( v13 )
      v14 = (Il2CppObject **)((Il2CppObject **(__fastcall *)(Il2CppObject **__return_ptr, Il2CppObject **, Il2CppClass *))(*v13)[22].monitor)(
                               v13,
                               *v6,
                               (*v13)[23].klass);
    else
      v14 = (Il2CppObject **)StringLiteral_22353/*"null"*/;
    *v6 = v14;
    goto LABEL_23;
  }
  if ( !v13 )
    return 0;
  v15 = int_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = (intptr_t)v15;
  v17 = System_Type__GetTypeFromHandle(v16, 0);
  if ( !System_Type__op_Equality(to, v17, 0) )
  {
    v30 = float_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v31.fields.value = (intptr_t)v30;
    v32 = System_Type__GetTypeFromHandle(v31, 0);
    if ( System_Type__op_Equality(to, v32, 0) )
    {
      v33 = string_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v34.fields.value = (intptr_t)v33;
      v35 = System_Type__GetTypeFromHandle(v34, 0);
      if ( System_Type__op_Equality(from, v35, 0) )
      {
        value = *v6;
        if ( *v6 && *value != (Il2CppObject *)string_TypeInfo )
          goto LABEL_60;
        if ( System_Single__TryParse((System_String_o *)value, (float *)result, 0) )
        {
          LODWORD(iptr) = result[0];
          v28 = float_TypeInfo;
LABEL_58:
          v47 = j_il2cpp_value_box_0(v28, &iptr, v21, v22, v23, v24, v25, v26);
          LODWORD(v14) = v47;
          *v6 = (Il2CppObject **)v47;
LABEL_23:
          sub_1C3E508((CGThumbnailListItem_o *)v6, (int32_t)v14, v11, v12);
          return 1;
        }
      }
    }
    return 0;
  }
  v18 = string_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (intptr_t)v18;
  v20 = System_Type__GetTypeFromHandle(v19, 0);
  if ( !System_Type__op_Equality(from, v20, 0) )
  {
    v36 = float_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v37.fields.value = (intptr_t)v36;
    v38 = System_Type__GetTypeFromHandle(v37, 0);
    if ( System_Type__op_Equality(from, v38, 0) )
    {
      value = *v6;
      if ( *v6 )
      {
        if ( (*value)[4].klass != float_TypeInfo->_1.element_class )
          goto LABEL_60;
        v41 = *(float *)j_il2cpp_object_unbox_0(value, float_TypeInfo, v39, v40);
        if ( !byte_4C51E80 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C51E80 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v42 = v41;
        v43 = modf(v41, &iptr);
        if ( v41 >= 0.0 )
        {
          if ( v43 == 0.5 )
          {
            v44 = iptr;
            v45 = 1.0;
LABEL_50:
            v46 = v44 + v45;
            if ( ((__int64)v44 & 1) != 0 )
              v44 = v46;
            goto LABEL_55;
          }
          v44 = floor(v42 + 0.5);
        }
        else
        {
          if ( v43 == -0.5 )
          {
            v44 = iptr;
            v45 = -1.0;
            goto LABEL_50;
          }
          v44 = ceil(v42 + -0.5);
        }
LABEL_55:
        v27 = (int)v44;
        v28 = int_TypeInfo;
        if ( v44 == INFINITY )
          v27 = 0x80000000;
        goto LABEL_57;
      }
LABEL_59:
      sub_1C3E7C0(value, from);
    }
    return 0;
  }
  value = *v6;
  if ( !*v6 || *value == (Il2CppObject *)string_TypeInfo )
  {
    if ( System_Int32__TryParse((System_String_o *)value, &result[1], 0) )
    {
      v27 = result[1];
      v28 = int_TypeInfo;
LABEL_57:
      LODWORD(iptr) = v27;
      goto LABEL_58;
    }
    return 0;
  }
LABEL_60:
  sub_1C3EA80(value);
  return PropertyReference__Convert_49444044(v48, v49, v50);
}


bool PropertyReference__Convert_49444044(System_Type_o *from, System_Type_o *to, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5B528 & 1) == 0 )
  {
    sub_1C3E564(&PropertyReference_TypeInfo);
    byte_4C5B528 = 1;
  }
  value = 0;
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  return PropertyReference__Convert_49442984(&value, from, to, v3);
}


bool PropertyReference__Convert_49444160(Il2CppObject *value, System_Type_o *to, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Type_o *Type; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-28h] BYREF

  valuea = value;
  if ( (byte_4C5B529 & 1) == 0 )
  {
    sub_1C3E564(&PropertyReference_TypeInfo);
    byte_4C5B529 = 1;
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
  return PropertyReference__Convert_49442984(&valuea, Type, to, v3);
}


bool PropertyReference__Equals(PropertyReference_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *mTarget; // x21
  Il2CppClass *klass; // x22

  if ( (byte_4C5B521 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&PropertyReference_TypeInfo);
    byte_4C5B521 = 1;
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
        return System_String__Equals_63672500(this->fields.mName, (System_String_o *)obj[1].monitor, 0);
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
      sub_1C3E7C0(mProperty, v5);
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

  if ( (byte_4C5B522 & 1) == 0 )
  {
    sub_1C3E564(&PropertyReference_TypeInfo);
    byte_4C5B522 = 1;
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
  __int64 (*v7)(void); // x2
  Il2CppType *v9; // x19
  System_RuntimeTypeHandle_o v10; // x0

  if ( (byte_4C5B520 & 1) == 0 )
  {
    sub_1C3E564(&System_Type_TypeInfo);
    sub_1C3E564(&void_var);
    byte_4C5B520 = 1;
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
      v7 = *(__int64 (**)(void))(*(_QWORD *)mProperty + 568LL);
      return (System_Type_o *)v7();
    }
    goto LABEL_17;
  }
  if ( System_Reflection_FieldInfo__op_Inequality(this->fields.mField, 0, 0) )
  {
    mProperty = this->fields.mField;
    if ( mProperty )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)mProperty + 584LL);
      return (System_Type_o *)v7();
    }
LABEL_17:
    sub_1C3E7C0(mProperty, v5);
  }
  v9 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = (intptr_t)v9;
  return System_Type__GetTypeFromHandle(v10, 0);
}


void PropertyReference__Reset(PropertyReference_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.mField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mField, 0, v2, v3);
  this->fields.mProperty = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mProperty, 0, v5, v6);
}


void PropertyReference__Set(
        PropertyReference_o *this,
        UnityEngine_Component_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.mTarget = target;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)target, (int32_t)methodName, method);
  this->fields.mName = methodName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mName, (int32_t)methodName, v6, v7);
}


bool PropertyReference__Set_49440056(PropertyReference_o *this, Il2CppObject *value, const MethodInfo *method)
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
  if ( (byte_4C5B525 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&StringLiteral_303/*" to "*/);
    sub_1C3E564(&StringLiteral_14912/*"Unable to convert "*/);
    byte_4C5B525 = 1;
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
          sub_1C3E7C0(0, v10);
        System_Reflection_FieldInfo__SetValue(mField, (Il2CppObject *)this->fields.mTarget, 0, 0);
        return 1;
      }
      mProperty = this->fields.mProperty;
      if ( !mProperty )
        sub_1C3E7C0(0, v10);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_PropertyInfo_o *, const MethodInfo *))mProperty->klass->vtable._19_unknown.methodPtr)(
              mProperty,
              mProperty->klass->vtable._19_unknown.method)
          & 1) != 0 )
      {
        v13 = this->fields.mProperty;
        if ( !v13 )
          sub_1C3E7C0(0, v12);
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
        sub_1C3E7C0(v9, v8);
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
        v16 = (System_String_o *)StringLiteral_14912/*"Unable to convert "*/;
        if ( Type )
          v17 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                     Type,
                                     Type->klass->vtable._3_ToString.method);
        else
          v17 = 0;
        PropertyType = PropertyReference__GetPropertyType(this, v15);
        v21 = (System_String_o *)StringLiteral_303/*" to "*/;
        if ( PropertyType )
          v22 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))PropertyType->klass->vtable._3_ToString.methodPtr)(
                                     PropertyType,
                                     PropertyType->klass->vtable._3_ToString.method);
        else
          v22 = 0;
        v23 = (Il2CppObject *)System_String__Concat_63676720(v16, v17, v21, v22, 0);
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

  if ( (byte_4C5B523 & 1) == 0 )
  {
    sub_1C3E564(&PropertyReference_TypeInfo);
    byte_4C5B523 = 1;
  }
  mTarget = this->fields.mTarget;
  mName = this->fields.mName;
  if ( !PropertyReference_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PropertyReference_TypeInfo);
  return PropertyReference__ToString_49442416(mTarget, mName, v2);
}


System_String_o *PropertyReference__ToString_49442416(
        UnityEngine_Component_o *comp,
        System_String_o *property,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  int32_t IndexOf; // w0

  if ( (byte_4C5B524 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1011/*".[property]"*/);
    sub_1C3E564(&StringLiteral_988/*"."*/);
    byte_4C5B524 = 1;
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
    sub_1C3E7C0(Type, v6);
  }
  v7 = (System_String_o *)Type;
  IndexOf = System_String__LastIndexOf((System_String_o *)Type, 0x2Eu, 0);
  if ( IndexOf >= 1 )
    v7 = System_String__Substring(v7, IndexOf + 1, 0);
  if ( System_String__IsNullOrEmpty(property, 0) )
    return System_String__Concat_63636468(v7, (System_String_o *)StringLiteral_1011/*".[property]"*/, 0);
  else
    return System_String__Concat_63674716(v7, (System_String_o *)StringLiteral_988/*"."*/, property, 0);
}


bool PropertyReference__get_isEnabled(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  struct UnityEngine_Component_o *v5; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C5B51F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B51F = 1;
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
    sub_1C3E7C0(v8, v9);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0);
}


bool PropertyReference__get_isValid(PropertyReference_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20

  if ( (byte_4C5B51E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B51E = 1;
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
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.mName = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mName, (int32_t)value, (int32_t)method, v3);
  this->fields.mProperty = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mProperty, 0, v5, v6);
  this->fields.mField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mField, 0, v7, v8);
}


void PropertyReference__set_target(PropertyReference_o *this, UnityEngine_Component_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.mTarget = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
  this->fields.mProperty = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mProperty, 0, v5, v6);
  this->fields.mField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mField, 0, v7, v8);
}