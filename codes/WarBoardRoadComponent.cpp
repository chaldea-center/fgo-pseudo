void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A58CA5 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardRoadComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5403/*"DrawPath"*/);
    byte_4A58CA5 = 1;
  }
  WarBoardRoadComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_5403/*"DrawPath"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardRoadComponent_TypeInfo->static_fields,
    StringLiteral_5403/*"DrawPath"*/,
    v1,
    v2);
}


void __fastcall WarBoardRoadComponent___ctor(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardRoadComponent__ChangeColor(
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
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  UnityEngine_Object_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardRoadComponent_o *v17; // x21
  UnityEngine_Color_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A58CA4 & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58CA4 = 1;
  }
  if ( targets )
  {
    v13 = *(_QWORD *)&targets->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( v14 >= (unsigned int)v13 )
          sub_1B88814(this, immediate);
        v15 = (UnityEngine_Object_o *)targets->m_Items[v14];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_20;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
          v18.fields.r = r;
          v18.fields.g = g;
          v18.fields.b = b;
          v18.fields.a = a;
          this = (WarBoardRoadComponent_o *)TweenColor__Begin(gameObject, duration, v18, 0LL);
          if ( immediate )
          {
            v17 = this;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v17 )
LABEL_20:
                sub_1B8880C(this, immediate);
              TweenColor__set_value((TweenColor_o *)v17, *(UnityEngine_Color_o *)&v17[2].fields.roadImage, 0LL);
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0LL);
            }
          }
        }
        LODWORD(v13) = targets->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v13 );
    }
  }
}


void __fastcall WarBoardRoadComponent__ChangeColorDarkness(
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

  if ( (byte_4A58CA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&UICommonButtonColor_TypeInfo);
    byte_4A58CA2 = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v8);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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


void __fastcall WarBoardRoadComponent__ChangeColorNormal(
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

  if ( (byte_4A58CA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&UICommonButtonColor_TypeInfo);
    byte_4A58CA3 = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v8);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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


void __fastcall WarBoardRoadComponent__DisablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4A58CA1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22959/*"road"*/);
    byte_4A58CA1 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1B8880C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22959/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4A58CA0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22960/*"road_on"*/);
    byte_4A58CA0 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1B8880C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22960/*"road_on"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardRoadComponent__Initialize(
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
  int32_t v19; // w3
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
  if ( (byte_4A58C9F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (WarBoardRoadComponent_o *)sub_1B885B0(&StringLiteral_22959/*"road"*/);
    byte_4A58C9F = 1;
  }
  if ( !road )
    goto LABEL_39;
  *(_QWORD *)&v16->fields.squareIndex1 = *(_QWORD *)&road->fields.squareIndex1;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields.simpleAnimation, (int32_t)Component_object, v18, v19);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_22959/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
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
  if ( !byte_4A55CE3 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE3 = 1;
  }
  v22 = v20 - y;
  v23 = x - v36;
  v24 = v21 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  v25 = sqrtf((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  v26 = vcvtps_s32_f32(v25);
  v27 = ceilf(v25) == INFINITY ? 0x80000000 : v26;
  if ( !this )
    goto LABEL_39;
  UIWidget__set_width((UIWidget_o *)this, v27, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v29 = v27 <= 0 ? -v27 : 1 - v27;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v29 >> 1), 0LL);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  v30 = this;
  v37.fields.z = atan2f(v22, v23) * 57.296;
  v37.fields.x = 0.0;
  v37.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v30, v37, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !byte_4A55CE4 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE4 = 1;
  }
  this = (WarBoardRoadComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v25 <= 0.00001 )
  {
    if ( !byte_4A55CE1 )
    {
      this = (WarBoardRoadComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
    sub_1B8880C(this, imageSetAtlas);
  v38.fields.z = z + (float)((float)(v25 * 0.5) * v34);
  v38.fields.y = y + (float)((float)(v25 * 0.5) * v33);
  v38.fields.x = v36 + (float)((float)(v25 * 0.5) * v32);
  UnityEngine_Transform__set_localPosition(transform, v38, 0LL);
}


bool __fastcall WarBoardRoadComponent__SameRoad(
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


SimpleAnimation_o *__fastcall WarBoardRoadComponent__get_SimpleAnimation(
        WarBoardRoadComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.simpleAnimation;
}