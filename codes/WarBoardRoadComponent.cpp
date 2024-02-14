void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4216548 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardRoadComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_5414/*"DrawPath"*/, v8);
    byte_4216548 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardRoadComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5414/*"DrawPath"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5414/*"DrawPath"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v18; // x0
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4216547 & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, immediate);
    byte_4216547 = 1;
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
        {
          v18 = sub_B0D9A8(this);
          sub_B0D948(v18, 0LL);
        }
        v15 = (UnityEngine_Object_o *)targets->m_Items[v14];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_22;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
          v19.fields.r = r;
          v19.fields.g = g;
          v19.fields.b = b;
          v19.fields.a = a;
          this = (WarBoardRoadComponent_o *)TweenColor__Begin(gameObject, duration, v19, 0LL);
          if ( immediate )
          {
            v17 = this;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v17 )
LABEL_22:
                sub_B0D97C(this);
              TweenColor__set_value((TweenColor_o *)v17, *(UnityEngine_Color_o *)&v17[2].fields.simpleAnimation, 0LL);
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
  float r; // s9
  float g; // s10
  float b; // s11
  float a; // s12
  UnityEngine_Component_o *transform; // x0
  WarBoardRoadComponent_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216545 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, immediate);
    sub_B0D8A4(&UICommonButtonColor_TypeInfo, v5);
    byte_4216545 = 1;
  }
  v6 = UICommonButtonColor_TypeInfo;
  if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v6 = UICommonButtonColor_TypeInfo;
  }
  duration = v6->static_fields->duration;
  gray = UnityEngine_Color__get_gray(0LL);
  r = gray.fields.r;
  g = gray.fields.g;
  b = gray.fields.b;
  a = gray.fields.a;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
  v16.fields.r = r;
  v16.fields.g = g;
  v16.fields.b = b;
  v16.fields.a = a;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v16,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v14);
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
  float r; // s9
  float g; // s10
  float b; // s11
  float a; // s12
  UnityEngine_Component_o *transform; // x0
  WarBoardRoadComponent_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216546 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, immediate);
    sub_B0D8A4(&UICommonButtonColor_TypeInfo, v5);
    byte_4216546 = 1;
  }
  v6 = UICommonButtonColor_TypeInfo;
  if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v6 = UICommonButtonColor_TypeInfo;
  }
  duration = v6->static_fields->duration;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
  v16.fields.r = r;
  v16.fields.g = g;
  v16.fields.b = b;
  v16.fields.a = a;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v16,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v14);
}


void __fastcall WarBoardRoadComponent__DisablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4216544 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21921/*"road"*/, method);
    byte_4216544 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B0D97C(0LL);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_21921/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_4216543 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21922/*"road_on"*/, method);
    byte_4216543 = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B0D97C(0LL);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_21922/*"road_on"*/, 0LL);
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
  float y; // s9
  float x; // s11
  float v11; // s10
  float v12; // s12
  float v13; // s13
  WarBoardRoadComponent_o *v16; // x19
  __int64 v17; // x1
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float magnitude; // s8
  int v29; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v31; // w8
  float v32; // s9
  UnityEngine_Transform_o *transform; // x19
  float v34; // s0
  float v35; // s1
  float v36; // s2
  MethodInfo v37; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_4216542 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, imageSetAtlas);
    this = (WarBoardRoadComponent_o *)sub_B0D8A4(&StringLiteral_21921/*"road"*/, v17);
    byte_4216542 = 1;
  }
  LODWORD(v37.invoker_method) = 0;
  v37.methodPointer = 0LL;
  if ( !road )
    goto LABEL_31;
  v16->fields.squareIndex1 = road->fields.squareIndex1;
  v16->fields.squareIndex2 = road->fields.squareIndex2;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_31;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v16->fields.simpleAnimation,
    Component_srcLineSprite,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21921/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( isSwapPos )
    v25 = v13;
  else
    v25 = x;
  if ( isSwapPos )
    v26 = v12;
  else
    v26 = y;
  if ( isSwapPos )
    v27 = v11;
  else
    v27 = z;
  if ( !isSwapPos )
    x = v13;
  if ( isSwapPos )
    v12 = y;
  if ( isSwapPos )
    v11 = z;
  v38.fields.x = v25 - x;
  v38.fields.y = v26 - v12;
  v38.fields.z = v27 - v11;
  v37.methodPointer = *(Il2CppMethodPointer *)&v38.fields.x;
  *(float *)&v37.invoker_method = v38.fields.z;
  magnitude = UnityEngine_Vector3__get_magnitude(v38, &v37);
  this = (WarBoardRoadComponent_o *)UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  if ( !v16->fields.roadImage )
    goto LABEL_31;
  v29 = (int)this;
  UIWidget__set_width((UIWidget_o *)v16->fields.roadImage, (int32_t)this, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31 = v29 <= 0 ? -v29 : 1 - v29;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v31 >> 1), 0LL);
  v32 = atan2f(*((float *)&v37.methodPointer + 1), *(float *)&v37.methodPointer);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this
    || (v39.fields.y = 0.0,
        v39.fields.z = v32 * 57.296,
        v39.fields.x = 0.0,
        UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v39, 0LL),
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL),
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_normalized(v40, &v37),
        !transform) )
  {
LABEL_31:
    sub_B0D97C(this);
  }
  v41.fields.x = x + (float)((float)(magnitude * 0.5) * v34);
  v41.fields.y = v12 + (float)((float)(magnitude * 0.5) * v35);
  v41.fields.z = v11 + (float)((float)(magnitude * 0.5) * v36);
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