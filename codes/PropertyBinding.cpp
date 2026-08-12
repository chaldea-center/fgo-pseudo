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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PropertyReference_o *source; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct PropertyReference_o *target; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  source = this->fields.source;
  if ( source )
  {
    source->fields.mField = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&source->fields.mField, 0, v2, v3, v4, v5, v6, v7);
    source->fields.mProperty = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&source->fields.mProperty, 0, v10, v11, v12, v13, v14, v15);
  }
  target = this->fields.target;
  if ( target )
  {
    target->fields.mField = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&target->fields.mField, 0, v2, v3, v4, v5, v6, v7);
    target->fields.mProperty = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&target->fields.mProperty, 0, v17, v18, v19, v20, v21, v22);
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
  struct PropertyReference_o *v7; // x19
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x1
  System_Type_o *v10; // x20
  __int64 v11; // x1
  System_Type_o *PropertyType; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x21
  Il2CppObject *mLastValue; // x8
  Il2CppObject **p_mLastValue; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  source = this->fields.source;
  if ( source && this->fields.target && PropertyReference__get_isValid(source, method) )
  {
    target = this->fields.target;
    if ( !target )
      goto LABEL_30;
    if ( PropertyReference__get_isValid(target, v4) )
    {
      direction = this->fields.direction;
      if ( direction == 1 )
      {
        target = this->fields.target;
        if ( !target )
          goto LABEL_30;
        v7 = this->fields.source;
        goto LABEL_12;
      }
      if ( !direction )
      {
        target = this->fields.source;
        if ( !target )
          goto LABEL_30;
        v7 = this->fields.target;
LABEL_12:
        target = (PropertyReference_o *)PropertyReference__Get(target, v4);
        if ( v7 )
        {
          v9 = (Il2CppObject *)target;
          target = v7;
LABEL_14:
          PropertyReference__Set_56432672(target, v9, v8);
          return;
        }
LABEL_30:
        sub_2213CDC(target, v4);
      }
      target = this->fields.source;
      if ( !target )
        goto LABEL_30;
      target = (PropertyReference_o *)PropertyReference__GetPropertyType(target, v4);
      if ( !this->fields.target )
        goto LABEL_30;
      v10 = (System_Type_o *)target;
      PropertyType = PropertyReference__GetPropertyType(this->fields.target, v4);
      if ( !*(_DWORD *)(qword_59843E0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_59843E0, v11);
      if ( System_Type__op_Equality(v10, PropertyType, 0) )
      {
        target = this->fields.source;
        if ( !target )
          goto LABEL_30;
        v19 = PropertyReference__Get(target, v4);
        p_mLastValue = &this->fields.mLastValue;
        mLastValue = this->fields.mLastValue;
        if ( mLastValue
          && ((unsigned int)((_QWORD *(__fastcall *)(Il2CppObject *__return_ptr, Il2CppObject *, Il2CppObject *, const MethodInfo *))mLastValue->klass->vtable[0].methodPtr)(
                              mLastValue,
                              this->fields.mLastValue,
                              v19,
                              mLastValue->klass->vtable[0].method)
            & 1) != 0 )
        {
          target = this->fields.target;
          if ( !target )
            goto LABEL_30;
          target = (PropertyReference_o *)PropertyReference__Get(target, v4);
          if ( !*p_mLastValue )
            goto LABEL_30;
          v19 = (Il2CppObject *)target;
          if ( ((unsigned int)((_QWORD *(__fastcall *)(Il2CppObject *__return_ptr, Il2CppObject *, PropertyReference_o *, const MethodInfo *))(*p_mLastValue)->klass->vtable[0].methodPtr)(
                                *p_mLastValue,
                                *p_mLastValue,
                                target,
                                (*p_mLastValue)->klass->vtable[0].method)
              & 1) != 0 )
            return;
          this->fields.mLastValue = v19;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mLastValue,
            (int32_t)v19,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          target = this->fields.source;
          if ( !target )
            goto LABEL_30;
        }
        else
        {
          this->fields.mLastValue = v19;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mLastValue,
            (int32_t)v19,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18);
          target = this->fields.target;
          if ( !target )
            goto LABEL_30;
        }
        v9 = v19;
        goto LABEL_14;
      }
    }
  }
}