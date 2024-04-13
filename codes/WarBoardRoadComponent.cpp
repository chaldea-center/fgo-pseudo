void __fastcall WarBoardRoadComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EAB3F & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardRoadComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_5475/*"DrawPath"*/, v8, v9, v10);
    byte_42EAB3F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardRoadComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_5475/*"DrawPath"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5475/*"DrawPath"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_42EAB3E & 1) == 0 )
  {
    this = (WarBoardRoadComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, immediate, (_DWORD)targets, method);
    byte_42EAB3E = 1;
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
          v19 = sub_B5D6C8(this);
          sub_B5D668(v19, 0LL);
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
                sub_B5D69C(this, v16);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UICommonButtonColor_c *v9; // x0
  float duration; // s8
  float r; // s9
  float g; // s10
  float b; // s11
  float a; // s12
  UnityEngine_Component_o *transform; // x0
  __int64 v16; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAB3C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
      immediate,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UICommonButtonColor_TypeInfo, v6, v7, v8);
    byte_42EAB3C = 1;
  }
  v9 = UICommonButtonColor_TypeInfo;
  if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v9 = UICommonButtonColor_TypeInfo;
  }
  duration = v9->static_fields->duration;
  gray = UnityEngine_Color__get_gray(0LL);
  r = gray.fields.r;
  g = gray.fields.g;
  b = gray.fields.b;
  a = gray.fields.a;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v16);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
  v20.fields.r = r;
  v20.fields.g = g;
  v20.fields.b = b;
  v20.fields.a = a;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v20,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v18);
}


void __fastcall WarBoardRoadComponent__ChangeColorNormal(
        WarBoardRoadComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UICommonButtonColor_c *v9; // x0
  float duration; // s8
  float r; // s9
  float g; // s10
  float b; // s11
  float a; // s12
  UnityEngine_Component_o *transform; // x0
  __int64 v16; // x1
  WarBoardRoadComponent_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAB3D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
      immediate,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UICommonButtonColor_TypeInfo, v6, v7, v8);
    byte_42EAB3D = 1;
  }
  v9 = UICommonButtonColor_TypeInfo;
  if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
    v9 = UICommonButtonColor_TypeInfo;
  }
  duration = v9->static_fields->duration;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v16);
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardRoadComponent_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                         transform,
                                                                                         1,
                                                                                         (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
  v20.fields.r = r;
  v20.fields.g = g;
  v20.fields.b = b;
  v20.fields.a = a;
  WarBoardRoadComponent__ChangeColor(
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v20,
    duration,
    immediate,
    (UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v18);
}


void __fastcall WarBoardRoadComponent__DisablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UISprite_o *roadImage; // x0

  if ( (byte_42EAB3B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22146/*"road"*/, (_DWORD)method, v2, v3);
    byte_42EAB3B = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B5D69C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22146/*"road"*/, 0LL);
}


void __fastcall WarBoardRoadComponent__EnablePass(WarBoardRoadComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UISprite_o *roadImage; // x0

  if ( (byte_42EAB3A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22147/*"road_on"*/, (_DWORD)method, v2, v3);
    byte_42EAB3A = 1;
  }
  roadImage = this->fields.roadImage;
  if ( !roadImage )
    sub_B5D69C(0LL, method);
  UISprite__set_spriteName(roadImage, (System_String_o *)StringLiteral_22147/*"road_on"*/, 0LL);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float magnitude; // s8
  int v31; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v33; // w8
  float v34; // s9
  UnityEngine_Transform_o *transform; // x19
  float v36; // s0
  float v37; // s1
  float v38; // s2
  MethodInfo v39; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  z = position2.fields.z;
  y = position2.fields.y;
  x = position2.fields.x;
  v11 = position1.fields.z;
  v12 = position1.fields.y;
  v13 = position1.fields.x;
  v16 = this;
  if ( (byte_42EAB39 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___,
      (_DWORD)imageSetAtlas,
      (_DWORD)road,
      isSwapPos);
    this = (WarBoardRoadComponent_o *)sub_B5D5C4(&StringLiteral_22146/*"road"*/, v17, v18, v19);
    byte_42EAB39 = 1;
  }
  LODWORD(v39.invoker_method) = 0;
  v39.methodPointer = 0LL;
  if ( !road )
    goto LABEL_31;
  v16->fields.squareIndex1 = road->fields.squareIndex1;
  v16->fields.squareIndex2 = road->fields.squareIndex2;
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  if ( !this )
    goto LABEL_31;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v16->fields.simpleAnimation,
    Component_srcLineSprite,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  UISprite__set_atlas((UISprite_o *)this, imageSetAtlas, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_22146/*"road"*/, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  ((void (__fastcall *)(WarBoardRoadComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( isSwapPos )
    v27 = v13;
  else
    v27 = x;
  if ( isSwapPos )
    v28 = v12;
  else
    v28 = y;
  if ( isSwapPos )
    v29 = v11;
  else
    v29 = z;
  if ( !isSwapPos )
    x = v13;
  if ( isSwapPos )
    v12 = y;
  if ( isSwapPos )
    v11 = z;
  v40.fields.x = v27 - x;
  v40.fields.y = v28 - v12;
  v40.fields.z = v29 - v11;
  v39.methodPointer = *(Il2CppMethodPointer *)&v40.fields.x;
  *(float *)&v39.invoker_method = v40.fields.z;
  magnitude = UnityEngine_Vector3__get_magnitude(v40, &v39);
  this = (WarBoardRoadComponent_o *)UnityEngine_Mathf__CeilToInt(magnitude, 0LL);
  if ( !v16->fields.roadImage )
    goto LABEL_31;
  v31 = (int)this;
  UIWidget__set_width((UIWidget_o *)v16->fields.roadImage, (int32_t)this, 0LL);
  this = (WarBoardRoadComponent_o *)v16->fields.roadImage;
  if ( !this )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33 = v31 <= 0 ? -v31 : 1 - v31;
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v33 >> 1), 0LL);
  v34 = atan2f(*((float *)&v39.methodPointer + 1), *(float *)&v39.methodPointer);
  this = (WarBoardRoadComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
  if ( !this
    || (v41.fields.y = 0.0,
        v41.fields.z = v34 * 57.296,
        v41.fields.x = 0.0,
        UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v41, 0LL),
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL),
        *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_normalized(v42, &v39),
        !transform) )
  {
LABEL_31:
    sub_B5D69C(this, imageSetAtlas);
  }
  v43.fields.x = x + (float)((float)(magnitude * 0.5) * v36);
  v43.fields.y = v12 + (float)((float)(magnitude * 0.5) * v37);
  v43.fields.z = v11 + (float)((float)(magnitude * 0.5) * v38);
  UnityEngine_Transform__set_localPosition(transform, v43, 0LL);
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