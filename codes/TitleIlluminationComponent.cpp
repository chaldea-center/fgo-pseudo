void TitleIlluminationComponent___ctor(TitleIlluminationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleIlluminationComponent__Setup(
        TitleIlluminationComponent_o *this,
        int32_t x,
        int32_t y,
        int32_t sz,
        float lifetime,
        TitleIlluminationManager_o *manager,
        const MethodInfo *method)
{
  int32_t v13; // w23
  void *transform; // x0
  __int64 v15; // x1
  float v16; // s0 OVERLAPPED
  float v17; // s1
  int v18; // s2
  UIWidget_o *v19; // x19
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C54599 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_4C54599 = 1;
  }
  this->fields.IlluminationX = x;
  this->fields.IlluminationY = y;
  this->fields.lifetime = lifetime;
  this->fields.lifetimeMax = lifetime;
  this->fields.manager = manager;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.manager, (int32_t)manager, y, *(const MethodInfo **)&sz);
  if ( sz >= 0 )
    v13 = sz;
  else
    v13 = sz + 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  v16 = (float)(sz * x);
  if ( (y & 1) == 0 )
    v16 = v16 - (float)(v13 >> 1);
  v17 = (float)((v13 >> 1) * y);
  v18 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&v16, 0);
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !transform )
LABEL_11:
    sub_1C3E7C0(transform, v15);
  v20.fields.r = *((float *)transform + 37);
  v20.fields.g = *((float *)transform + 38);
  v20.fields.b = *((float *)transform + 39);
  v20.fields.a = 1.0;
  v19 = (UIWidget_o *)transform;
  UIWidget__set_color((UIWidget_o *)transform, v20, 0);
  UIWidget__set_depth(v19, 1, 0);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v19->klass->vtable._30_MarkAsChanged.methodPtr)(
    v19,
    v19->klass->vtable._30_MarkAsChanged.method);
}


void TitleIlluminationComponent__Start(TitleIlluminationComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleIlluminationComponent__Update(TitleIlluminationComponent_o *this, const MethodInfo *method)
{
  float lifetime; // s8
  Il2CppObject *Component_object; // x20
  TitleIlluminationManager_o *manager; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  long double v8; // q0
  long double v9; // q0

  if ( (byte_4C5459A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5459A = 1;
  }
  lifetime = this->fields.lifetime;
  this->fields.lifetime = lifetime - UnityEngine_Time__get_deltaTime(0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  manager = (TitleIlluminationManager_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)manager & 1) == 0 )
  {
    *(float *)&v8 = this->fields.lifetime;
    if ( *(float *)&v8 <= 0.0 )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        TitleIlluminationManager__ReturnIllumination(manager, this, v7);
        if ( Component_object )
        {
          LODWORD(v9) = 0;
          ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
            Component_object,
            Component_object->klass->vtable[8].method,
            v9);
          goto LABEL_12;
        }
      }
    }
    else if ( Component_object )
    {
      *(float *)&v8 = *(float *)&v8 / this->fields.lifetimeMax;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method,
        v8);
LABEL_12:
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[30].methodPtr)(
        Component_object,
        Component_object->klass->vtable[30].method);
      return;
    }
    sub_1C3E7C0(manager, v6);
  }
}