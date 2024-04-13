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
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *transform; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *v26; // x20
  int32_t layer; // w2
  const MethodInfo *v28; // x3

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42E87DA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isSkip, isPause, method);
    sub_B5D5C4(&StringLiteral_5889/*"Effect("*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v19, v20, v21);
    byte_42E87DA = 1;
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
  transform = System_String__Concat_44580072(
                (System_String_o *)StringLiteral_5889/*"Effect("*/,
                this->fields.effectName,
                (System_String_o *)StringLiteral_659/*")"*/,
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
    v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
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
          ProgramEffectComponent__SetChildInit(this, v26, layer, v28);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(transform, v24);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_IEnumerator_c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  UnityEngine_Transform_o *v25; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x10
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x19
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0

  v6 = this;
  if ( (byte_42E87DB & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)tf, layer, method);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v7, v8, v9);
    this = (ProgramEffectComponent_o *)sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v10, v11, v12);
    byte_42E87DB = 1;
  }
  if ( !tf
    || (this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B5D69C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (ProgramEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B5D69C(0LL, v13);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 2;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
      }
      else
      {
LABEL_19:
        v24 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v20);
      }
      v25 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                         Enumerator,
                                         *(_QWORD *)(v24 + 8));
      if ( v25 )
      {
        v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v27
          || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[v27 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (ProgramEffectComponent_o *)sub_B5D990(v25);
          goto LABEL_35;
        }
      }
      ProgramEffectComponent__SetChildInit(v6, v25, layer, v26);
    }
    v28 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
    if ( v28 )
    {
      v30 = *(_QWORD *)v28;
      v31 = v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
            goto LABEL_30;
        }
        v34 = v30 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_30:
        v34 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v29);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
    }
  }
}


void __fastcall ProgramEffectComponent__Stop(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E87DC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87DC = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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