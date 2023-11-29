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

  if ( (byte_40FBA72 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardRoadComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_5379, v8);
    byte_40FBA72 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardRoadComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5379;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5379;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_40FBA71 & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, immediate);
    byte_40FBA71 = 1;
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
          sub_B17100(this, immediate, targets);
          sub_B170A0();
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
          v18.fields.r = r;
          v18.fields.g = g;
          v18.fields.b = b;
          v18.fields.a = a;
          this = (WarBoardRoadComponent_o *)TweenColor__Begin(gameObject, duration, v18, 0LL);
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
                sub_B170D4();
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

  if ( (byte_40FBA6F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, immediate);
    sub_B16FFC(&UICommonButtonColor_TypeInfo, v5);
    byte_40FBA6F = 1;
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
    sub_B170D4();
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
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

  if ( (byte_40FBA70 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, immediate);
    sub_B16FFC(&UICommonButtonColor_TypeInfo, v5);
    byte_40FBA70 = 1;
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
    sub_B170D4();
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
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

  if ( (byte_40FBA6E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21756, method);
    byte_40FBA6E = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B170D4();
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_21756, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  UISprite_o *roadImage; // x0

  if ( (byte_40FBA6D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21757, method);
    byte_40FBA6D = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B170D4();
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_21757, 0LL);
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
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UISprite_o *roadImage; // x0
  UISprite_o *v27; // x0
  struct UISprite_o *v28; // x0
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float magnitude; // s8
  int32_t v33; // w0
  int v34; // w20
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  int v37; // w8
  float v38; // s9
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v40; // x19
  float v41; // s0
  float v42; // s1
  float v43; // s2
  MethodInfo v44; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  if ( (byte_40FBA6C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, imageSetAtlas);
    sub_B16FFC(&StringLiteral_21756, v17);
    byte_40FBA6C = 1;
  }
  LODWORD(v44.invoker_method) = 0;
  v44.methodPointer = 0LL;
  if ( !road )
    goto LABEL_31;
  this->fields.squareIndex1 = road->fields.squareIndex1;
  this->fields.squareIndex2 = road->fields.squareIndex2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    goto LABEL_31;
  UISprite__set_atlas(roadImage, imageSetAtlas, 0LL);
  v27 = this->fields.roadImage;
  if ( !v27 )
    goto LABEL_31;
  UISprite__set_spriteName(v27, (System_String_o *)StringLiteral_21756, 0LL);
  v28 = this->fields.roadImage;
  if ( !v28 )
    goto LABEL_31;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v28->klass->vtable._33_MakePixelPerfect.method)(
    v28,
    v28->klass->vtable._34_get_minWidth.methodPtr);
  if ( isSwapPos )
    v29 = v13;
  else
    v29 = x;
  if ( isSwapPos )
    v30 = v12;
  else
    v30 = y;
  if ( isSwapPos )
    v31 = v11;
  else
    v31 = z;
  if ( !isSwapPos )
    x = v13;
  if ( isSwapPos )
    v12 = y;
  if ( isSwapPos )
    v11 = z;
  v45.fields.x = v29 - x;
  v45.fields.y = v30 - v12;
  v45.fields.z = v31 - v11;
  v44.methodPointer = *(Il2CppMethodPointer *)&v45.fields.x;
  *(float *)&v44.invoker_method = v45.fields.z;
  magnitude = UnityEngine_Vector3__get_magnitude(v45, &v44);
  v33 = UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  if ( !this->fields.roadImage )
    goto LABEL_31;
  v34 = v33;
  UIWidget__set_width((UIWidget_o *)this->fields.roadImage, v33, 0LL);
  v35 = (UnityEngine_Component_o *)this->fields.roadImage;
  if ( !v35 )
    goto LABEL_31;
  v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
  v37 = v34 <= 0 ? -v34 : 1 - v34;
  GameObjectExtensions__SetLocalPositionX(v36, (float)(v37 >> 1), 0LL);
  v38 = atan2f(*((float *)&v44.methodPointer + 1), *(float *)&v44.methodPointer);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (v46.fields.y = 0.0,
        v46.fields.z = v38 * 57.296,
        v46.fields.x = 0.0,
        UnityEngine_Transform__set_localEulerAngles(transform, v46, 0LL),
        v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_normalized(v47, &v44),
        !v40) )
  {
LABEL_31:
    sub_B170D4();
  }
  v48.fields.x = x + (float)((float)(magnitude * 0.5) * v41);
  v48.fields.y = v12 + (float)((float)(magnitude * 0.5) * v42);
  v48.fields.z = v11 + (float)((float)(magnitude * 0.5) * v43);
  UnityEngine_Transform__set_localPosition(v40, v48, 0LL);
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