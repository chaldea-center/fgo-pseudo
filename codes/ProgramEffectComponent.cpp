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
  System_String_o *v19; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  int32_t layer; // w2
  const MethodInfo *v27; // x3

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40FA014 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isSkip);
    sub_B16FFC(&StringLiteral_5794/*"Effect("*/, v16);
    sub_B16FFC(&StringLiteral_651/*")"*/, v17);
    byte_40FA014 = 1;
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
  v19 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_5794/*"Effect("*/,
          this->fields.effectName,
          (System_String_o *)StringLiteral_651/*")"*/,
          0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_Object__set_name(gameObject, v19, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(parent, 0LL, 0LL) )
  {
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( v23 )
    {
      v24 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v23, 0LL);
      if ( v24 )
      {
        v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
        if ( v25 )
        {
          layer = UnityEngine_GameObject__get_layer(v25, 0LL);
          ProgramEffectComponent__SetChildInit(this, v22, layer, v27);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Transform_o *v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_40FA015 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, tf);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v8);
    byte_40FA015 = 1;
  }
  if ( !tf || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
LABEL_35:
    sub_B170D4();
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !v10 )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer(v10, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B170D4();
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
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v16 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          v18 += 2;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
      }
      else
      {
LABEL_19:
        v19 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v20 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                         Enumerator,
                                         *(_QWORD *)(v19 + 8));
      if ( v20 )
      {
        v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_B173C8(v20);
          goto LABEL_35;
        }
      }
      ProgramEffectComponent__SetChildInit(this, v20, layer, v21);
    }
    v23 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
    if ( v23 )
    {
      v24 = *(_QWORD *)v23;
      v25 = v23;
      if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
      {
        v26 = 0LL;
        v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
            goto LABEL_30;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_30:
        v28 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
    }
  }
}


void __fastcall ProgramEffectComponent__Stop(ProgramEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FA016 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA016 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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