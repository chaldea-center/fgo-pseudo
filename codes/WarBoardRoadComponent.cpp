void WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C352B0 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardRoadComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_5373/*"DrawPath"*/);
    byte_4C352B0 = 1;
  }
  WarBoardRoadComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_5373/*"DrawPath"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardRoadComponent_TypeInfo->static_fields, StringLiteral_5373/*"DrawPath"*/, v1, v2);
}


void WarBoardRoadComponent___ctor(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


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
  if ( (byte_4C352AF & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C352AF = 1;
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
          sub_1C32E84(this);
        v15 = (UnityEngine_Object_o *)targets->m_Items[v14];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v17 )
LABEL_20:
                sub_1C32E7C(this);
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


void WarBoardRoadComponent__ChangeColorDarkness(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  UICommonButtonColor_c *v5; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v9; // x3
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C352AD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    sub_1C32C20(&UICommonButtonColor_TypeInfo);
    byte_4C352AD = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C32E7C(0);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_object,
    v10,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_object,
    v9);
}


void WarBoardRoadComponent__ChangeColorNormal(WarBoardRoadComponent_o *this, bool immediate, const MethodInfo *method)
{
  UICommonButtonColor_c *v5; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v9; // x3
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C352AE & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    sub_1C32C20(&UICommonButtonColor_TypeInfo);
    byte_4C352AE = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C32E7C(0);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
  v10.fields.r = 1.0;
  v10.fields.g = 1.0;
  v10.fields.b = 1.0;
  v10.fields.a = 1.0;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_object,
    v10,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_object,
    v9);
}


void WarBoardRoadComponent__DisablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4C352AC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23131/*"road"*/);
    byte_4C352AC = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1C32E7C(0);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_23131/*"road"*/, 0);
}


void WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4C352AB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23132/*"road_on"*/);
    byte_4C352AB = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1C32E7C(0);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_23132/*"road_on"*/, 0);
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
  float z; // s8
  float y; // s10
  float x; // s14
  float v11; // s9
  float v12; // s12
  float v13; // s13
  WarBoardRoadComponent_o *v16; // x19
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  float v20; // s15
  float v21; // s11
  float v22; // s9
  float v23; // s12
  float v24; // s14
  float v25; // s13
  unsigned int v26; // w9
  int32_t v27; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v29; // w8
  WarBoardRoadComponent_o *v30; // x20
  UnityEngine_Transform_o *transform; // x19
  float v32; // s0
  float v33; // s1
  float v34; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v36; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_4C352AA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (WarBoardRoadComponent_o *)sub_1C32C20(&StringLiteral_23131/*"road"*/);
    byte_4C352AA = 1;
  }
  if ( !road )
    goto LABEL_39;
  *(_QWORD *)&v16->fields.squareIndex1 = *(_QWORD *)&road->fields.squareIndex1;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
  if ( !this )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->fields.simpleAnimation, (int32_t)Component_object, v18, v19);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_23131/*"road"*/, 0);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  if ( isSwapPos )
  {
    v36 = x;
    x = v13;
    v20 = v12;
    v21 = v11;
  }
  else
  {
    v20 = y;
    v21 = z;
    v36 = v13;
    y = v12;
    z = v11;
  }
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
  }
  v22 = v20 - y;
  v23 = x - v36;
  v24 = v21 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C31A98 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C31A98 = 1;
  }
  v25 = sqrtf((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  v26 = vcvtps_s32_f32(v25);
  v27 = ceilf(v25) == INFINITY ? 0x80000000 : v26;
  if ( !this )
    goto LABEL_39;
  UIWidget__set_width((UIWidget_o *)this, v27, 0);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v29 = v27 <= 0 ? -v27 : 1 - v27;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v29 >> 1), 0);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
  if ( !this )
    goto LABEL_39;
  v30 = this;
  v37.fields.z = atan2f(v22, v23) * 57.296;
  v37.fields.x = 0.0;
  v37.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v30, v37, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  this = (WarBoardRoadComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v25 <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      this = (WarBoardRoadComponent_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v32 = static_fields->zeroVector.fields.x;
    v33 = static_fields->zeroVector.fields.y;
    v34 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v32 = v23 / v25;
    v33 = v22 / v25;
    v34 = v24 / v25;
  }
  if ( !transform )
LABEL_39:
    sub_1C32E7C(this);
  v38.fields.z = z + (float)((float)(v25 * 0.5) * v34);
  v38.fields.y = y + (float)((float)(v25 * 0.5) * v33);
  v38.fields.x = v36 + (float)((float)(v25 * 0.5) * v32);
  UnityEngine_Transform__set_localPosition(transform, v38, 0);
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