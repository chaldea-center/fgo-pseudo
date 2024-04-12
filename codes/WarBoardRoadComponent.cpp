void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B21E0 & 1) == 0 )
  {
    sub_B52984(&WarBoardRoadComponent_TypeInfo);
    sub_B52984(&StringLiteral_5440/*"DrawPath"*/);
    byte_42B21E0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardRoadComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_5440/*"DrawPath"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5440/*"DrawPath"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  WarBoardRoadComponent_o *v18; // x21
  __int64 v19; // x0
  UnityEngine_Color_o v20; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42B21DF & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B21DF = 1;
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
          v19 = sub_B52A88(this);
          sub_B52A28(v19, 0LL);
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
          v20.fields.r = r;
          v20.fields.g = g;
          v20.fields.b = b;
          v20.fields.a = a;
          this = (WarBoardRoadComponent_o *)TweenColor__Begin(gameObject, duration, v20, 0LL);
          if ( immediate )
          {
            v18 = this;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (WarBoardRoadComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v18 )
LABEL_22:
                sub_B52A5C(this, v16);
              TweenColor__set_value((TweenColor_o *)v18, *(UnityEngine_Color_o *)&v18[2].fields.simpleAnimation, 0LL);
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 0, 0LL);
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
  float r; // s9
  float g; // s10
  float b; // s11
  float a; // s12
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B21DD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52984(&UICommonButtonColor_TypeInfo);
    byte_42B21DD = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  gray = UnityEngine_Color__get_gray(0LL);
  r = gray.fields.r;
  g = gray.fields.g;
  b = gray.fields.b;
  a = gray.fields.a;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B52A5C(0LL, v12);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
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


void __fastcall WarBoardRoadComponent__ChangeColorNormal(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  UICommonButtonColor_c *v5; // x0
  float duration; // s8
  float r; // s9
  float g; // s10
  float b; // s11
  float a; // s12
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B21DE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52984(&UICommonButtonColor_TypeInfo);
    byte_42B21DE = 1;
  }
  v5 = UICommonButtonColor_TypeInfo;
  if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v5 = UICommonButtonColor_TypeInfo;
  }
  duration = v5->static_fields->duration;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B52A5C(0LL, v12);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
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

  if ( (byte_42B21DC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22032/*"road"*/);
    byte_42B21DC = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B52A5C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22032/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_42B21DB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22033/*"road_on"*/);
    byte_42B21DB = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B52A5C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22033/*"road_on"*/, 0LL);
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
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float magnitude; // s8
  int v28; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v30; // w8
  float v31; // s9
  UnityEngine_Transform_o *transform; // x19
  float v33; // s0
  float v34; // s1
  float v35; // s2
  MethodInfo v36; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_42B21DA & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    this = (WarBoardRoadComponent_o *)sub_B52984(&StringLiteral_22032/*"road"*/);
    byte_42B21DA = 1;
  }
  LODWORD(v36.invoker_method) = 0;
  v36.methodPointer = 0LL;
  if ( !road )
    goto LABEL_31;
  v16->fields.squareIndex1 = road->fields.squareIndex1;
  v16->fields.squareIndex2 = road->fields.squareIndex2;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_31;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&v16->fields.simpleAnimation,
    Component_srcLineSprite,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_22032/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( isSwapPos )
    v24 = v13;
  else
    v24 = x;
  if ( isSwapPos )
    v25 = v12;
  else
    v25 = y;
  if ( isSwapPos )
    v26 = v11;
  else
    v26 = z;
  if ( !isSwapPos )
    x = v13;
  if ( isSwapPos )
    v12 = y;
  if ( isSwapPos )
    v11 = z;
  v37.fields.x = v24 - x;
  v37.fields.y = v25 - v12;
  v37.fields.z = v26 - v11;
  v36.methodPointer = *(Il2CppMethodPointer *)&v37.fields.x;
  *(float *)&v36.invoker_method = v37.fields.z;
  magnitude = UnityEngine_Vector3__get_magnitude(v37, &v36);
  this = (WarBoardRoadComponent_o *)UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  if ( !v16->fields.roadImage )
    goto LABEL_31;
  v28 = (int)this;
  UIWidget__set_width((UIWidget_o *)v16->fields.roadImage, (int32_t)this, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30 = v28 <= 0 ? -v28 : 1 - v28;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v30 >> 1), 0LL);
  v31 = atan2f(*((float *)&v36.methodPointer + 1), *(float *)&v36.methodPointer);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this
    || (v38.fields.y = 0.0,
        v38.fields.z = v31 * 57.296,
        v38.fields.x = 0.0,
        UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v38, 0LL),
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_normalized(v39, &v36),
        !transform) )
  {
LABEL_31:
    sub_B52A5C(this, imageSetAtlas);
  }
  v40.fields.x = x + (float)((float)(magnitude * 0.5) * v33);
  v40.fields.y = v12 + (float)((float)(magnitude * 0.5) * v34);
  v40.fields.z = v11 + (float)((float)(magnitude * 0.5) * v35);
  UnityEngine_Transform__set_localPosition(transform, v40, 0LL);
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