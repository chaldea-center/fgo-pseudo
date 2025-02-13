void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BD9EFB & 1) == 0 )
  {
    sub_1C21E38(&WarBoardRoadComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_5516/*"DrawPath"*/);
    byte_4BD9EFB = 1;
  }
  WarBoardRoadComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_5516/*"DrawPath"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardRoadComponent_TypeInfo->static_fields,
    StringLiteral_5516/*"DrawPath"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  if ( (byte_4BD9EFA & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9EFA = 1;
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
          sub_1C2209C(this, immediate);
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
                sub_1C22094(this, immediate);
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

  if ( (byte_4BD9EF8 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
    sub_1C21E38(&UICommonButtonColor_TypeInfo);
    byte_4BD9EF8 = 1;
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
    sub_1C22094(0LL, v8);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
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

  if ( (byte_4BD9EF9 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
    sub_1C21E38(&UICommonButtonColor_TypeInfo);
    byte_4BD9EF9 = 1;
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
    sub_1C22094(0LL, v8);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
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

  if ( (byte_4BD9EF7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23378/*"road"*/);
    byte_4BD9EF7 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1C22094(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_23378/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4BD9EF6 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23379/*"road_on"*/);
    byte_4BD9EF6 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1C22094(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_23379/*"road_on"*/, 0LL);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  float v24; // s15
  float v25; // s11
  float v26; // s9
  float v27; // s12
  float v28; // s14
  float v29; // s13
  unsigned int v30; // w9
  int32_t v31; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v33; // w8
  WarBoardRoadComponent_o *v34; // x20
  UnityEngine_Transform_o *transform; // x19
  float v36; // s0
  float v37; // s1
  float v38; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v40; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_4BD9EF5 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (WarBoardRoadComponent_o *)sub_1C21E38(&StringLiteral_23378/*"road"*/);
    byte_4BD9EF5 = 1;
  }
  if ( !road )
    goto LABEL_39;
  *(_QWORD *)&v16->fields.squareIndex1 = *(_QWORD *)&road->fields.squareIndex1;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v16->fields.simpleAnimation,
    (int64_t)Component_object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_23378/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( isSwapPos )
  {
    v40 = x;
    x = v13;
    v24 = v12;
    v25 = v11;
  }
  else
  {
    v24 = y;
    v25 = z;
    v40 = v13;
    y = v12;
    z = v11;
  }
  if ( !byte_4BD6BB3 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB3 = 1;
  }
  v26 = v24 - y;
  v27 = x - v40;
  v28 = v25 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BD7265 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7265 = 1;
  }
  v29 = sqrtf((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  v30 = vcvtps_s32_f32(v29);
  v31 = ceilf(v29) == INFINITY ? 0x80000000 : v30;
  if ( !this )
    goto LABEL_39;
  UIWidget__set_width((UIWidget_o *)this, v31, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33 = v31 <= 0 ? -v31 : 1 - v31;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v33 >> 1), 0LL);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  v34 = this;
  v41.fields.z = atan2f(v26, v27) * 57.296;
  v41.fields.x = 0.0;
  v41.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v34, v41, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !byte_4BD6BB4 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB4 = 1;
  }
  this = (WarBoardRoadComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v29 <= 0.00001 )
  {
    if ( !byte_4BD6BB1 )
    {
      this = (WarBoardRoadComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v36 = static_fields->zeroVector.fields.x;
    v37 = static_fields->zeroVector.fields.y;
    v38 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v36 = v27 / v29;
    v37 = v26 / v29;
    v38 = v28 / v29;
  }
  if ( !transform )
LABEL_39:
    sub_1C22094(this, imageSetAtlas);
  v42.fields.z = z + (float)((float)(v29 * 0.5) * v38);
  v42.fields.y = y + (float)((float)(v29 * 0.5) * v37);
  v42.fields.x = v40 + (float)((float)(v29 * 0.5) * v36);
  UnityEngine_Transform__set_localPosition(transform, v42, 0LL);
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