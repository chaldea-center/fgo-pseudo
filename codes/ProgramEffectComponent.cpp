void __fastcall ProgramEffectComponent___ctor(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.effectColor = UnityEngine_Color__get_white(0LL);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProgramEffectComponent__Init(
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
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *v22; // x20
  int32_t layer; // w2
  const MethodInfo *v24; // x3

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4187A5A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isSkip);
    sub_B2C35C(&StringLiteral_5811/*"Effect("*/, v16);
    sub_B2C35C(&StringLiteral_652/*")"*/, v17);
    byte_4187A5A = 1;
  }
  this->fields.duration = time;
  this->fields.effectColor.fields.r = r;
  this->fields.effectColor.fields.g = g;
  this->fields.effectColor.fields.b = b;
  this->fields.effectColor.fields.a = a;
  this->fields.effectRange = range;
  this->fields.isSkip = isSkip;
  this->fields.isPause = isPause;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  transform = System_String__Concat_44307816(
                (System_String_o *)StringLiteral_5811/*"Effect("*/,
                this->fields.effectName,
                (System_String_o *)StringLiteral_652/*")"*/,
                0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_Object__set_name(gameObject, transform, 0LL);
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parent, 0LL, 0LL) )
  {
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      transform = (System_String_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
      if ( transform )
      {
        transform = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( transform )
        {
          layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
          ProgramEffectComponent__SetChildInit(this, v22, layer, v24);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(transform, v20);
  }
}


void __fastcall ProgramEffectComponent__OnUpdate(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  float totalTime; // s8

  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  this->fields.totalTime = totalTime + UnityEngine_Time__get_deltaTime(0LL);
}


void __fastcall ProgramEffectComponent__Resume(ProgramEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isSkip = isSkip;
}


void __fastcall ProgramEffectComponent__SetChildInit(
        ProgramEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  ProgramEffectComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  UnityEngine_Transform_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x10
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x19
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  v6 = this;
  if ( (byte_4187A5B & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, tf);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (ProgramEffectComponent_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v8);
    byte_4187A5B = 1;
  }
  if ( !tf
    || (this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B2C434(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B2C434(0LL, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v13;
          p_offset += 4;
          if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v17 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v18;
          v19 += 2;
          if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
      }
      else
      {
LABEL_19:
        v20 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v16);
      }
      v21 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                         Enumerator,
                                         *(_QWORD *)(v20 + 8));
      if ( v21 )
      {
        v23 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[v23 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (ProgramEffectComponent_o *)sub_B2C728(v21);
          goto LABEL_35;
        }
      }
      ProgramEffectComponent__SetChildInit(v6, v21, layer, v22);
    }
    v24 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
    if ( v24 )
    {
      v26 = *(_QWORD *)v24;
      v27 = v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
            goto LABEL_30;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_30:
        v30 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v25);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
    }
  }
}


void __fastcall ProgramEffectComponent__Stop(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4187A5C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187A5C = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}


System_String_o *__fastcall ProgramEffectComponent__get_EffectName(
        ProgramEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.effectName;
}


bool __fastcall ProgramEffectComponent__get_IsStart(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isStart;
}