void PropertyBinding___ctor(PropertyBinding_o *this, const MethodInfo *method)
{
  this->fields.update = 1;
  this->fields.editMode = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PropertyBinding__FixedUpdate(PropertyBinding_o *this, const MethodInfo *method)
{
  if ( this->fields.update == 3 )
    PropertyBinding__UpdateTarget(this, method);
}


void PropertyBinding__LateUpdate(PropertyBinding_o *this, const MethodInfo *method)
{
  if ( this->fields.update == 2 )
    PropertyBinding__UpdateTarget(this, method);
}


void PropertyBinding__OnValidate(PropertyBinding_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct PropertyReference_o *source; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct PropertyReference_o *target; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  source = this->fields.source;
  if ( source )
  {
    source->fields.mField = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&source->fields.mField, 0, v2, v3);
    source->fields.mProperty = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&source->fields.mProperty, 0, v6, v7);
  }
  target = this->fields.target;
  if ( target )
  {
    target->fields.mField = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&target->fields.mField, 0, v2, v3);
    target->fields.mProperty = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&target->fields.mProperty, 0, v9, v10);
  }
}


void PropertyBinding__Start(PropertyBinding_o *this, const MethodInfo *method)
{
  PropertyBinding__UpdateTarget(this, method);
  if ( !this->fields.update )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void PropertyBinding__Update(PropertyBinding_o *this, const MethodInfo *method)
{
  if ( this->fields.update == 1 )
    PropertyBinding__UpdateTarget(this, method);
}


void PropertyBinding__UpdateTarget(PropertyBinding_o *this, const MethodInfo *method)
{
  PropertyReference_o *source; // x0
  const MethodInfo *v4; // x1
  PropertyReference_o *target; // x0
  int32_t direction; // w8
  struct PropertyReference_o *v7; // x20
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x1
  struct PropertyReference_o *v10; // x19
  System_Type_o *v11; // x20
  System_Type_o *PropertyType; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *mLastValue; // x8
  Il2CppObject **p_mLastValue; // x20
  Il2CppObject *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4CBAAFA & 1) == 0 )
  {
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CBAAFA = 1;
  }
  source = this->fields.source;
  if ( source && this->fields.target && PropertyReference__get_isValid(source, method) )
  {
    target = this->fields.target;
    if ( !target )
      goto LABEL_32;
    target = (PropertyReference_o *)PropertyReference__get_isValid(target, v4);
    if ( ((unsigned __int8)target & 1) != 0 )
    {
      direction = this->fields.direction;
      if ( !direction )
      {
        target = this->fields.source;
        if ( target )
        {
          v10 = this->fields.target;
          target = (PropertyReference_o *)PropertyReference__Get(target, v4);
          if ( v10 )
          {
            v9 = (Il2CppObject *)target;
            target = v10;
            goto LABEL_30;
          }
        }
LABEL_32:
        sub_1C6BC60(target, v4);
      }
      v7 = this->fields.source;
      if ( direction == 1 )
      {
        target = this->fields.target;
        if ( target )
        {
          target = (PropertyReference_o *)PropertyReference__Get(target, v4);
          if ( v7 )
          {
            v9 = (Il2CppObject *)target;
            target = v7;
LABEL_30:
            PropertyReference__Set_49668940(target, v9, v8);
            return;
          }
        }
        goto LABEL_32;
      }
      if ( !v7 )
        goto LABEL_32;
      target = (PropertyReference_o *)PropertyReference__GetPropertyType(this->fields.source, v4);
      if ( !this->fields.target )
        goto LABEL_32;
      v11 = (System_Type_o *)target;
      PropertyType = PropertyReference__GetPropertyType(this->fields.target, v4);
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      if ( System_Type__op_Equality(v11, PropertyType, 0) )
      {
        target = this->fields.source;
        if ( !target )
          goto LABEL_32;
        v13 = PropertyReference__Get(target, v4);
        p_mLastValue = &this->fields.mLastValue;
        mLastValue = this->fields.mLastValue;
        v18 = v13;
        if ( mLastValue
          && ((unsigned int)((_QWORD *(__fastcall *)(Il2CppObject *__return_ptr, Il2CppObject *, Il2CppObject *, const MethodInfo *))mLastValue->klass->vtable[0].methodPtr)(
                              mLastValue,
                              this->fields.mLastValue,
                              v13,
                              mLastValue->klass->vtable[0].method)
            & 1) != 0 )
        {
          target = this->fields.target;
          if ( !target )
            goto LABEL_32;
          target = (PropertyReference_o *)PropertyReference__Get(target, v4);
          if ( !*p_mLastValue )
            goto LABEL_32;
          v18 = (Il2CppObject *)target;
          if ( ((unsigned int)((_QWORD *(__fastcall *)(Il2CppObject *__return_ptr, Il2CppObject *, PropertyReference_o *, const MethodInfo *))(*p_mLastValue)->klass->vtable[0].methodPtr)(
                                *p_mLastValue,
                                *p_mLastValue,
                                target,
                                (*p_mLastValue)->klass->vtable[0].method)
              & 1) != 0 )
            return;
          this->fields.mLastValue = v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mLastValue, (int32_t)v18, v19, v20);
          target = this->fields.source;
          if ( !target )
            goto LABEL_32;
        }
        else
        {
          this->fields.mLastValue = v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mLastValue, (int32_t)v18, v14, v15);
          target = this->fields.target;
          if ( !target )
            goto LABEL_32;
        }
        v9 = v18;
        goto LABEL_30;
      }
    }
  }
}