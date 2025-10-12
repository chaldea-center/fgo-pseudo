void ProgramEffectComponent___ctor(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void ProgramEffectComponent__Init(
        ProgramEffectComponent_o *this,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float a; // s9
  float b; // s10
  float g; // s11
  float r; // s12
  bool v14; // w23
  bool v15; // w22
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *transform; // x0
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *v19; // x20
  int32_t layer; // w2
  const MethodInfo *v21; // x3

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v14 = isSkip;
  v15 = isPause;
  if ( (byte_4C39099 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_5848/*"Effect("*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    byte_4C39099 = 1;
  }
  this->fields.duration = time;
  this->fields.effectColor.fields.r = r;
  this->fields.effectColor.fields.g = g;
  this->fields.effectColor.fields.b = b;
  this->fields.effectColor.fields.a = a;
  this->fields.effectRange = range;
  this->fields.isSkip = v14;
  this->fields.isPause = v15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  transform = System_String__Concat_63556792(
                (System_String_o *)StringLiteral_5848/*"Effect("*/,
                this->fields.effectName,
                (System_String_o *)StringLiteral_759/*")"*/,
                0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Object__set_name(gameObject, transform, 0);
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_13;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) )
  {
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      transform = (System_String_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( transform )
      {
        transform = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( transform )
        {
          layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0);
          ProgramEffectComponent__SetChildInit(this, v19, layer, v21);
          return;
        }
      }
    }
LABEL_13:
    sub_1C32E7C(transform);
  }
}


void ProgramEffectComponent__OnUpdate(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  float totalTime; // s8

  UIWidget__OnUpdate((UIWidget_o *)this, 0);
  totalTime = this->fields.totalTime;
  this->fields.totalTime = totalTime + UnityEngine_Time__get_deltaTime(0);
}


void ProgramEffectComponent__Resume(ProgramEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  this->fields.isSkip = isSkip;
  this->fields.isPause = 0;
}


void ProgramEffectComponent__SetChildInit(
        ProgramEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  ProgramEffectComponent_o *v6; // x21
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 naturalAligment; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v6 = this;
  if ( (byte_4C3909A & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (ProgramEffectComponent_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C3909A = 1;
  }
  if ( !tf
    || (this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_35:
    sub_1C32E7C(this);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0) != layer )
  {
    this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v9;
          p_offset += 4;
          if ( !v9 )
            goto LABEL_12;
        }
        v11 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(
              Enumerator,
              *(_QWORD *)(v11 + 8))
          & 1) == 0 )
        break;
      v12 = Enumerator->klass;
      v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v13;
          v14 += 2;
          if ( !v13 )
            goto LABEL_19;
        }
        v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
      }
      else
      {
LABEL_19:
        v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                         Enumerator,
                                         *(_QWORD *)(v15 + 8));
      if ( v16 )
      {
        naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1C3313C(v16);
          goto LABEL_35;
        }
      }
      ProgramEffectComponent__SetChildInit(v6, v16, layer, v17);
    }
    v19 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
    if ( v19 )
    {
      v20 = *(_QWORD *)v19;
      v21 = v19;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_30;
        }
        v24 = v20 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_30:
        v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    }
  }
}


void ProgramEffectComponent__Stop(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3909B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3909B = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


System_String_o *ProgramEffectComponent__get_EffectName(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.effectName;
}


bool ProgramEffectComponent__get_IsStart(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isStart;
}