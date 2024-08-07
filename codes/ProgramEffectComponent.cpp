void __fastcall ProgramEffectComponent___ctor(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
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
  bool v14; // w23
  bool v15; // w22
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
  v14 = isSkip;
  v15 = isPause;
  if ( (byte_49FFEAD & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, isSkip);
    sub_1B64A00(&StringLiteral_5786/*"Effect("*/, v16);
    sub_1B64A00(&StringLiteral_815/*")"*/, v17);
    byte_49FFEAD = 1;
  }
  this->fields.duration = time;
  this->fields.effectColor.fields.r = r;
  this->fields.effectColor.fields.g = g;
  this->fields.effectColor.fields.b = b;
  this->fields.effectColor.fields.a = a;
  this->fields.effectRange = range;
  this->fields.isSkip = v14;
  this->fields.isPause = v15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  transform = System_String__Concat_61396396(
                (System_String_o *)StringLiteral_5786/*"Effect("*/,
                this->fields.effectName,
                (System_String_o *)StringLiteral_815/*")"*/,
                0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Object__set_name(gameObject, transform, 0LL);
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_13:
    sub_1B64C5C(transform, v20);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  v6 = this;
  if ( (byte_49FFEAE & 1) == 0 )
  {
    sub_1B64A00(&System_IDisposable_TypeInfo, tf);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (ProgramEffectComponent_o *)sub_1B64A00(&UnityEngine_Transform_TypeInfo, v8);
    byte_49FFEAE = 1;
  }
  if ( !tf
    || (this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1B64C5C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_1B64C5C(0LL, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
      }
      else
      {
LABEL_19:
        v18 = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                         Enumerator,
                                         *(_QWORD *)(v18 + 8));
      if ( v19 )
      {
        methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1B64F1C(v19);
          goto LABEL_35;
        }
      }
      ProgramEffectComponent__SetChildInit(v6, v19, layer, v20);
    }
    v22 = sub_1B64B3C(Enumerator, System_IDisposable_TypeInfo);
    if ( v22 )
    {
      v23 = *(_QWORD *)v22;
      v24 = v22;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_30;
        }
        v27 = v23 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_30:
        v27 = sub_1BB69E0(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
    }
  }
}


void __fastcall ProgramEffectComponent__Stop(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FFEAF & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FFEAF = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
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