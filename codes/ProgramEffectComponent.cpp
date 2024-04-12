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
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *v20; // x20
  int32_t layer; // w2
  const MethodInfo *v22; // x3

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42AFB95 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5853/*"Effect("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42AFB95 = 1;
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
  transform = System_String__Concat_44570600(
                (System_String_o *)StringLiteral_5853/*"Effect("*/,
                this->fields.effectName,
                (System_String_o *)StringLiteral_661/*")"*/,
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
    v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
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
          ProgramEffectComponent__SetChildInit(this, v20, layer, v22);
          return;
        }
      }
    }
LABEL_14:
    sub_B52A5C(transform, v18);
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
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x10
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  __int64 v25; // x19
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  v6 = this;
  if ( (byte_42AFB96 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    this = (ProgramEffectComponent_o *)sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42AFB96 = 1;
  }
  if ( !tf
    || (this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B52A5C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B52A5C(0LL, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v11;
          p_offset += 4;
          if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v16;
          v17 += 2;
          if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
      }
      else
      {
LABEL_19:
        v18 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
      }
      v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                         Enumerator,
                                         *(_QWORD *)(v18 + 8));
      if ( v19 )
      {
        v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
          || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (ProgramEffectComponent_o *)sub_B52D50(v19);
          goto LABEL_35;
        }
      }
      ProgramEffectComponent__SetChildInit(v6, v19, layer, v20);
    }
    v22 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
    if ( v22 )
    {
      v24 = *(_QWORD *)v22;
      v25 = v22;
      if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
      {
        v26 = 0LL;
        v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
            goto LABEL_30;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_30:
        v28 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v23);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
    }
  }
}


void __fastcall ProgramEffectComponent__Stop(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AFB97 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFB97 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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