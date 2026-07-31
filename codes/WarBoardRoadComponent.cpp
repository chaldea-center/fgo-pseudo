void WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5935EAB & 1) == 0 )
  {
    sub_21FFC50(&WarBoardRoadComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_5554/*"DrawPath"*/);
    byte_5935EAB = 1;
  }
  v7 = StringLiteral_5554/*"DrawPath"*/;
  WarBoardRoadComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_5554/*"DrawPath"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardRoadComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void WarBoardRoadComponent___ctor(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardRoadComponent__ChangeColor(
        WarBoardRoadComponent_o *this,
        UnityEngine_Color_o color,
        float duration,
        bool immediate,
        UIWidget_array *targets,
        const MethodInfo *method)
{
  float a; // s9
  float b; // s10
  float g; // s11
  float r; // s12
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x22
  UnityEngine_Object_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardRoadComponent_o *v17; // x21
  UnityEngine_Color_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_5935EAA & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EAA = 1;
  }
  if ( targets )
  {
    max_length = targets->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      do
      {
        if ( v14 >= (unsigned int)max_length )
          sub_21FFED4(this);
        v15 = (UnityEngine_Object_o *)targets->m_Items[v14];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate, targets);
        this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_20;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
          v18.fields.r = r;
          v18.fields.g = g;
          v18.fields.b = b;
          v18.fields.a = a;
          this = (WarBoardRoadComponent_o *)TweenColor__Begin(gameObject, duration, v18, 0);
          if ( immediate )
          {
            v17 = this;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate, targets);
            this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v17 )
LABEL_20:
                sub_21FFECC(this, immediate);
              TweenColor__set_value((TweenColor_o *)v17, *(UnityEngine_Color_o *)&v17[2].fields.roadImage, 0);
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0);
            }
          }
        }
        LODWORD(max_length) = targets->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)max_length );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardRoadComponent__ChangeColorDarkness(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  UICommonButtonColor_c *v5; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935EA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&UICommonButtonColor_TypeInfo);
    byte_5935EA8 = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, immediate, method);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v8);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_object,
    v11,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_object,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardRoadComponent__ChangeColorNormal(WarBoardRoadComponent_o *this, bool immediate, const MethodInfo *method)
{
  UICommonButtonColor_c *v5; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935EA9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&UICommonButtonColor_TypeInfo);
    byte_5935EA9 = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, immediate, method);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v8);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_object,
    v11,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_object,
    v10);
}


void WarBoardRoadComponent__DisablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_5935EA7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24295/*"road"*/);
    byte_5935EA7 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_21FFECC(0, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_24295/*"road"*/, 0);
}


void WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_5935EA6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24296/*"road_on"*/);
    byte_5935EA6 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_21FFECC(0, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_24296/*"road_on"*/, 0);
}


void WarBoardRoadComponent__Initialize(
        WarBoardRoadComponent_o *this,
        UIAtlas_o *imageSetAtlas,
        WarBoardRoadEntity_o *road,
        UnityEngine_Vector3_o position1,
        UnityEngine_Vector3_o position2,
        bool isSwapPos,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s15
  float x; // s10
  float v10; // s8
  float v11; // s12
  float v12; // s13
  WarBoardRoadComponent_o *v16; // x19
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x2
  float v25; // s14
  float v26; // s11
  float v27; // s8
  float v28; // s14
  float v29; // s12
  float v30; // s13
  unsigned int v31; // w9
  int32_t v32; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v34; // w8
  WarBoardRoadComponent_o *v35; // x20
  __int64 v36; // x2
  UnityEngine_Transform_o *transform; // x19
  float v38; // s0
  float v39; // s1
  float v40; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v42; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v10 = position1.fields.z;
  v11 = position1.fields.y;
  v12 = position1.fields.x;
  v16 = this;
  if ( (byte_5935EA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (WarBoardRoadComponent_o *)sub_21FFC50(&StringLiteral_24295/*"road"*/);
    byte_5935EA5 = 1;
  }
  if ( !road )
    goto LABEL_39;
  *(_QWORD *)&v16->fields.squareIndex1 = *(_QWORD *)&road->fields.squareIndex1;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
  if ( !this )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v16->fields.simpleAnimation,
    (int32_t)Component_object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_24295/*"road"*/, 0);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  if ( isSwapPos )
  {
    v42 = y;
    v25 = v12;
    y = v11;
    v26 = v10;
  }
  else
  {
    v25 = x;
    v26 = z;
    v42 = v11;
    x = v12;
    z = v10;
  }
  if ( !byte_5931942 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931942 = 1;
  }
  v27 = v25 - x;
  v28 = v26 - z;
  v29 = y - v42;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, imageSetAtlas, v24);
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v30 = sqrtf((float)((float)(v27 * v27) + (float)(v29 * v29)) + (float)(v28 * v28));
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, imageSetAtlas, v24);
  v31 = vcvtps_s32_f32(v30);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  v32 = ceilf(v30) == INFINITY ? 0x80000000 : v31;
  if ( !this )
    goto LABEL_39;
  UIWidget__set_width((UIWidget_o *)this, v32, 0);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v34 = v32 <= 0 ? -v32 : 1 - v32;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v34 >> 1), 0);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
  if ( !this )
    goto LABEL_39;
  v35 = this;
  v43.fields.z = atan2f(v29, v27) * 57.296;
  v43.fields.x = 0.0;
  v43.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v35, v43, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  this = (WarBoardRoadComponent_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, imageSetAtlas, v36);
  if ( v30 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      this = (WarBoardRoadComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v38 = static_fields->zeroVector.fields.x;
    v39 = static_fields->zeroVector.fields.y;
    v40 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v38 = v27 / v30;
    v39 = v29 / v30;
    v40 = v28 / v30;
  }
  if ( !transform )
LABEL_39:
    sub_21FFECC(this, imageSetAtlas);
  v44.fields.x = x + (float)((float)(v30 * 0.5) * v38);
  v44.fields.z = z + (float)((float)(v30 * 0.5) * v40);
  v44.fields.y = v42 + (float)((float)(v30 * 0.5) * v39);
  UnityEngine_Transform__set_localPosition(transform, v44, 0);
}


bool WarBoardRoadComponent__SameRoad(
        WarBoardRoadComponent_o *this,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  if ( *(_QWORD *)&this->fields.squareIndex1 == __PAIR64__(squareIndex2, squareIndex1) )
    return 1;
  if ( this->fields.squareIndex1 == squareIndex2 )
    return this->fields.squareIndex2 == squareIndex1;
  return 0;
}


SimpleAnimation_o *WarBoardRoadComponent__get_SimpleAnimation(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  return this->fields.simpleAnimation;
}