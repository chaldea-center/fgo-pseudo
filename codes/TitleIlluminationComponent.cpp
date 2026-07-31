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
  bool v7; // w6
  bool v8; // w7
  void *transform; // x0
  __int64 v16; // x1
  int32_t v17; // w8
  int v18; // w8
  float v19; // s0
  int v20; // w8
  UIWidget_o *v21; // x19
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935E0C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_5935E0C = 1;
  }
  this->fields.IlluminationX = x;
  this->fields.IlluminationY = y;
  this->fields.lifetime = lifetime;
  this->fields.lifetimeMax = lifetime;
  this->fields.manager = manager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    *(System_String_o **)&y,
    *(System_String_o **)&sz,
    (int32_t)manager,
    (int32_t)method,
    v7,
    v8);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  v17 = sz >= 0 ? sz : sz + 1;
  v18 = v17 >> 1;
  v19 = (float)v18;
  v20 = v18 * y;
  if ( (y & 1) != 0 )
    v19 = 0.0;
  v22.fields.y = (float)v20;
  v22.fields.x = (float)(sz * x) - v19;
  v22.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v22, 0);
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !transform )
LABEL_11:
    sub_21FFECC(transform, v16);
  v23.fields.r = *((float *)transform + 37);
  v23.fields.g = *((float *)transform + 38);
  v23.fields.a = 1.0;
  v23.fields.b = *((float *)transform + 39);
  v21 = (UIWidget_o *)transform;
  UIWidget__set_color((UIWidget_o *)transform, v23, 0);
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
  float deltaTime; // s0
  const MethodInfo_37ED7E0 *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20
  TitleIlluminationManager_o *manager; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  long double v12; // q0
  float v13; // s0

  if ( (byte_5935E0D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E0D = 1;
  }
  lifetime = this->fields.lifetime;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v5 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___;
  this->fields.lifetime = lifetime - deltaTime;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v5);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  manager = (TitleIlluminationManager_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)manager & 1) == 0 )
  {
    v13 = this->fields.lifetime;
    if ( v13 <= 0.0 )
    {
      manager = this->fields.manager;
      if ( manager )
      {
        TitleIlluminationManager__ReturnIllumination(manager, this, v11);
        *(_QWORD *)&v12 = 0;
        if ( Component_object )
          goto LABEL_11;
      }
    }
    else if ( Component_object )
    {
      *(float *)&v12 = v13 / this->fields.lifetimeMax;
LABEL_11:
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method,
        v12);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[30].methodPtr)(
        Component_object,
        Component_object->klass->vtable[30].method);
      return;
    }
    sub_21FFECC(manager, v10);
  }
}