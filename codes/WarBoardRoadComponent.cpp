void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F9F8D & 1) == 0 )
  {
    sub_1B640C8(&WarBoardRoadComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_5378/*"DrawPath"*/, v4);
    byte_49F9F8D = 1;
  }
  WarBoardRoadComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_5378/*"DrawPath"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardRoadComponent_TypeInfo->static_fields,
    StringLiteral_5378/*"DrawPath"*/,
    v2,
    v3);
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
  if ( (byte_49F9F8C & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, immediate);
    byte_49F9F8C = 1;
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
          sub_1B6432C(this, immediate);
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
                sub_1B64324(this);
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
  UICommonButtonColor_c *v6; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9F8A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, immediate);
    sub_1B640C8(&UICommonButtonColor_TypeInfo, v5);
    byte_49F9F8A = 1;
  }
  v6 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v6 = UICommonButtonColor_TypeInfo;
  }
  duration = v6->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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
void __fastcall WarBoardRoadComponent__ChangeColorNormal(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UICommonButtonColor_c *v6; // x0
  float duration; // s8
  UnityEngine_Component_o *transform; // x0
  WarBoardRoadComponent_o *ComponentsInChildren_object; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9F8B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, immediate);
    sub_1B640C8(&UICommonButtonColor_TypeInfo, v5);
    byte_49F9F8B = 1;
  }
  v6 = UICommonButtonColor_TypeInfo;
  if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v6 = UICommonButtonColor_TypeInfo;
  }
  duration = v6->static_fields->duration;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  ComponentsInChildren_object = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                             transform,
                                                             1,
                                                             (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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

  if ( (byte_49F9F89 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22864/*"road"*/, method);
    byte_49F9F89 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1B64324(0LL);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22864/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_49F9F88 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22865/*"road_on"*/, method);
    byte_49F9F88 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_1B64324(0LL);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22865/*"road_on"*/, 0LL);
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
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  float v22; // s15
  float v23; // s11
  float v24; // s9
  float v25; // s12
  float v26; // s14
  float v27; // s13
  unsigned int v28; // w9
  int32_t v29; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v31; // w8
  WarBoardRoadComponent_o *v32; // x20
  __int64 v33; // x1
  UnityEngine_Transform_o *transform; // x19
  float v35; // s0
  float v36; // s1
  float v37; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v39; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_49F9F87 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, imageSetAtlas);
    this = (WarBoardRoadComponent_o *)sub_1B640C8(&StringLiteral_22864/*"road"*/, v17);
    byte_49F9F87 = 1;
  }
  if ( !road )
    goto LABEL_39;
  *(_QWORD *)&v16->fields.squareIndex1 = *(_QWORD *)&road->fields.squareIndex1;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->fields.simpleAnimation, (int32_t)Component_object, v19, v20);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_22864/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( isSwapPos )
  {
    v39 = x;
    x = v13;
    v22 = v12;
    v23 = v11;
  }
  else
  {
    v22 = y;
    v23 = z;
    v39 = v13;
    y = v12;
    z = v11;
  }
  if ( !byte_49F7113 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v21);
    byte_49F7113 = 1;
  }
  v24 = v22 - y;
  v25 = x - v39;
  v26 = v23 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v21);
    byte_49F779D = 1;
  }
  v27 = sqrtf((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  v28 = vcvtps_s32_f32(v27);
  v29 = ceilf(v27) == INFINITY ? 0x80000000 : v28;
  if ( !this )
    goto LABEL_39;
  UIWidget__set_width((UIWidget_o *)this, v29, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31 = v29 <= 0 ? -v29 : 1 - v29;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v31 >> 1), 0LL);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_39;
  v32 = this;
  v40.fields.z = atan2f(v24, v25) * 57.296;
  v40.fields.x = 0.0;
  v40.fields.y = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)v32, v40, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v33);
    byte_49F7114 = 1;
  }
  this = (WarBoardRoadComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v27 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      this = (WarBoardRoadComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v33);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v35 = static_fields->zeroVector.fields.x;
    v36 = static_fields->zeroVector.fields.y;
    v37 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v35 = v25 / v27;
    v36 = v24 / v27;
    v37 = v26 / v27;
  }
  if ( !transform )
LABEL_39:
    sub_1B64324(this);
  v41.fields.z = z + (float)((float)(v27 * 0.5) * v37);
  v41.fields.y = y + (float)((float)(v27 * 0.5) * v36);
  v41.fields.x = v39 + (float)((float)(v27 * 0.5) * v35);
  UnityEngine_Transform__set_localPosition(transform, v41, 0LL);
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