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
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v15; // w23
  void *transform; // x0
  __int64 v17; // x1
  float v18; // s0 OVERLAPPED
  float v19; // s1
  int v20; // s2
  UIWidget_o *v21; // x19
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEBE13 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_4CEBE13 = 1;
  }
  this->fields.IlluminationX = x;
  this->fields.IlluminationY = y;
  this->fields.lifetime = lifetime;
  this->fields.lifetimeMax = lifetime;
  this->fields.manager = manager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    y,
    sz,
    (System_String_o *)manager,
    (int32_t)method,
    v7,
    v8);
  if ( sz >= 0 )
    v15 = sz;
  else
    v15 = sz + 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  v18 = (float)(sz * x);
  if ( (y & 1) == 0 )
    v18 = v18 - (float)(v15 >> 1);
  v19 = (float)((v15 >> 1) * y);
  v20 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&v18, 0);
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !transform )
LABEL_11:
    sub_1C7BD40(transform, v17);
  v22.fields.r = *((float *)transform + 37);
  v22.fields.g = *((float *)transform + 38);
  v22.fields.b = *((float *)transform + 39);
  v22.fields.a = 1.0;
  v21 = (UIWidget_o *)transform;
  UIWidget__set_color((UIWidget_o *)transform, v22, 0);
  UIWidget__set_depth(v21, 1, 0);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v21->klass->vtable._30_MarkAsChanged.methodPtr)(
    v21,
    v21->klass->vtable._30_MarkAsChanged.method);
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

  if ( (byte_4CEBE14 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBE14 = 1;
  }
  lifetime = this->fields.lifetime;
  this->fields.lifetime = lifetime - UnityEngine_Time__get_deltaTime(0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1C7BD40(manager, v6);
  }
}