void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B13C00 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardRoadComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_5478/*"DrawPath"*/, v8, v9);
    byte_4B13C00 = 1;
  }
  WarBoardRoadComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_5478/*"DrawPath"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardRoadComponent_TypeInfo->static_fields,
    StringLiteral_5478/*"DrawPath"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4B13BFF & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, immediate, targets);
    byte_4B13BFF = 1;
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
          sub_1BCAA44(this, immediate);
        v15 = (UnityEngine_Object_o *)targets->m_Items[v14];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate);
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
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate);
            this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v17 )
LABEL_20:
                sub_1BCAA3C(this, immediate);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardRoadComponent__ChangeColorDarkness(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UICommonButtonColor_c *v7; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  __int64 v10; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v12; // x3
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13BFD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, immediate, method);
    sub_1BCA7E0(&UICommonButtonColor_TypeInfo, v5, v6);
    byte_4B13BFD = 1;
  }
  v7 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, immediate);
    v7 = UICommonButtonColor_TypeInfo;
  }
  duration = v7->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v10);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_object,
    v13,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_object,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardRoadComponent__ChangeColorNormal(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UICommonButtonColor_c *v7; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  __int64 v10; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v12; // x3
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13BFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, immediate, method);
    sub_1BCA7E0(&UICommonButtonColor_TypeInfo, v5, v6);
    byte_4B13BFE = 1;
  }
  v7 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, immediate);
    v7 = UICommonButtonColor_TypeInfo;
  }
  duration = v7->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v10);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_object,
    v13,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_object,
    v12);
}


void __fastcall WarBoardRoadComponent__DisablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *roadImage; // x0

  if ( (byte_4B13BFC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23206/*"road"*/, method, v2);
    byte_4B13BFC = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1BCAA3C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_23206/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *roadImage; // x0

  if ( (byte_4B13BFB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23207/*"road_on"*/, method, v2);
    byte_4B13BFB = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1BCAA3C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_23207/*"road_on"*/, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x2
  float v27; // s15
  float v28; // s11
  float v29; // s9
  float v30; // s12
  float v31; // s14
  float v32; // s13
  unsigned int v33; // w9
  int32_t v34; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v36; // w8
  WarBoardRoadComponent_o *v37; // x20
  __int64 v38; // x2
  UnityEngine_Transform_o *transform; // x19
  float v40; // s0
  float v41; // s1
  float v42; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v44; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_4B13BFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, imageSetAtlas, road);
    this = (WarBoardRoadComponent_o *)sub_1BCA7E0(&StringLiteral_23206/*"road"*/, v17, v18);
    byte_4B13BFA = 1;
  }
  if ( !road )
    goto LABEL_39;
  *(_QWORD *)&v16->fields.squareIndex1 = *(_QWORD *)&road->fields.squareIndex1;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v16->fields.simpleAnimation,
    (int64_t)Component_object,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_23206/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( isSwapPos )
  {
    v44 = x;
    x = v13;
    v27 = v12;
    v28 = v11;
  }
  else
  {
    v27 = y;
    v28 = z;
    v44 = v13;
    y = v12;
    z = v11;
  }
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, imageSetAtlas, v26);
    byte_4B109C3 = 1;
  }
  v29 = v27 - y;
  v30 = x - v44;
  v31 = v28 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, imageSetAtlas);
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, imageSetAtlas, v26);
    byte_4B1103A = 1;
  }
  v32 = sqrtf((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, imageSetAtlas);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  v33 = vcvtps_s32_f32(v32);
  v34 = ceilf(v32) == INFINITY ? 0x80000000 : v33;
  if ( !this )
    goto LABEL_39;
  UIWidget__set_width((UIWidget_o *)this, v34, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v36 = v34 <= 0 ? -v34 : 1 - v34;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v36 >> 1), 0LL);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  v37 = this;
  v45.fields.z = atan2f(v29, v30) * 57.296;
  v45.fields.x = 0.0;
  v45.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v37, v45, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, imageSetAtlas, v38);
    byte_4B109C4 = 1;
  }
  this = (WarBoardRoadComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, imageSetAtlas);
  if ( v32 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      this = (WarBoardRoadComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, imageSetAtlas, v38);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v40 = static_fields->zeroVector.fields.x;
    v41 = static_fields->zeroVector.fields.y;
    v42 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v40 = v30 / v32;
    v41 = v29 / v32;
    v42 = v31 / v32;
  }
  if ( !transform )
LABEL_39:
    sub_1BCAA3C(this, imageSetAtlas);
  v46.fields.z = z + (float)((float)(v32 * 0.5) * v42);
  v46.fields.y = y + (float)((float)(v32 * 0.5) * v41);
  v46.fields.x = v44 + (float)((float)(v32 * 0.5) * v40);
  UnityEngine_Transform__set_localPosition(transform, v46, 0LL);
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